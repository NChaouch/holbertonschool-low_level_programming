#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the pointer to the const char.
 * @letters: size_t.i
 * Return: byt_write.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int des;
	ssize_t byt_read, byt_write;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	/* Open file for read only */
	des = open(filename, O_RDONLY);
	if (des == (-1))
	{
		return (0);
	}
	/* Allocates memory for the buffer */
	buff = (char *)malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(des);
		return (0);
	}
	byt_read = read(des, buff, letters); /* Reads the file in the buffer. */
	if (byt_read == (-1))
	{
		free(buff);
		close(des);
		return (0);
	}
	/* Writes buffer contents to standard output */
	byt_write = write(STDOUT_FILENO, buff, byt_read);
	if (byt_write == -1 || byt_write != byt_read)
	{
		free(buff);
		close(des);
		return (0);
	}
	/* Free allocated memory and closes the file */
	free(buff);
	close(des);
	return (byt_write); /* Returns number of bytes written */
}
