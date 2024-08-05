#include "main.h"
#define BUFFER_SIZE 1024
/**
 * error_exit - Display an error message and terminates the program.
 * @code: Exit code to be used to terminate the program (int).
 * @format: the pointer to the const char (error message to be displayed).
 * @arg: arguments.
 */
void error_exit(int code, const char *format, const char arg)
{
	dprintf(STDERR_FILENO, format, arg);
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
	int des_src, des_dest;
	ssize_t byt_read, byt_write;
	char buff[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	/* Set file permissions: rw-rw-r-- (Owner: read/write, */
	/* Group: read/write, Others: read) */
	if (argc < 3) /* Check the correct number of arguments */
		error_exit(97, "Usage: %s file_from file_to\n", 0);
	des_src = open(argv[1], O_RDONLY); /* Open file for read only */
	if (des_src == (-1))
		error_exit(98, "Error: Can't read from file %s\n", 0);
	des_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (des_dest == (-1))
	{
		close(des_src);
		error_exit(99, "Error: Can't write to %s\n", 0);
	}
	while ((byt_read = read(des_src, buff, BUFFER_SIZE)) > 0)
	/*loop for read file source and write to the file destination */
	{
		byt_write = write(des_dest, buff, byt_read);

		if (byt_write != byt_read)
		{
			close(des_src);
			close(des_dest);
			error_exit(99, "Error: Can't write to %s\n", 0);
		}
	}
	if (byt_read == (-1)) /* Check for read error */
	{
		close(des_src);
		close(des_dest);
		error_exit(98, "Error: Can't read from file %s\n", 0);
	}
	if (close(des_src) == (-1)) /* close the file source */
		error_exit(100, "Error: Can't close fd %d\n", des_src);
	if (close(des_dest) == (-1)) /* close the file destination */
		error_exit(100, "Error: Can't close fd %d\n", des_dest);
	return (0);
}
