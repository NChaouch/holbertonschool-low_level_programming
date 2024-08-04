#include "main.h"
#define BUFFER_SIZE 1024
/**
 * error_exit - Displays an error message and terminates the program.
 * @code: Exit code to be used to terminate the program (int).
 * @message: the pointer to the const char (error message to be displayed).
 * @file_name: the pointer to the const char
 * (name of the file linked to the error).
 */
void error_exit(int code, const char *message, const char *file_name)
{
	dprintf(STDERR_FILENO, message, file_name);

	exit(code);
}
/**
 * error_exit_des - Displays an error message for a
 * file descriptor and terminates the program.
 * @code: Exit code to be used to terminate the program (int).
 * @message: The pointer to the const char (error message to be displayed).
 * @des: the file descriptor linked to the error (int).
 */
void error_exit_des(int code, const char *message, int des)
{
	dprintf(STDERR_FILENO, message, des);

	exit(code);
}
/**
 * main - Copies the contents of one file to another.
 * @argc: numbers of arguments passed to the programm.
 * @argv: the pointer to the char (Table of arguments passed to the program).
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int des_from, des_to, rd, wr;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	/* Checks if the number of arguments is correct */
	if (argc != 3)
		error_exit(97, "Usage: %s file_from file_to\n", argv[0]);
	/*  Opens read-only source file */
	des_from = open(argv[1], O_RDONLY);
	if (des_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	/* Opens or creates the destination file with the specified permissions */
	des_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (des_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	/* Reads the contents of the source file and writes */
	/* them to the destination file */
	while ((rd = read(des_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(des_to, buffer, rd);
		if (wr == -1 || wr != rd)
		{
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	/* Checks for reading errors */
	if (rd == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	/* Close source file and check for errors */
	if (close(des_from) == -1)
	{
		error_exit_des(100, "Error: Can't close fd %d\n", des_from);
	}
	/* Close destination file and check for errors */
	if (close(des_to) == -1)
	{
		error_exit_des(100, "Error: Can't close fd %d\n", des_to);
	}
	return (0);
}
