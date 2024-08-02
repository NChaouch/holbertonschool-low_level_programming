#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: the pointer to the const char.
 * @text_content: the pointer to the char.
 * Return: 1 if success.
 */
int create_file(const char *filename, char *text_content)
{
	int des;
	ssize_t byt_write;
	size_t len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	/* Open file with specified permissions (write, create...) */
	des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (des == (-1))
	{
		return (-1);
	}

	/* If the text_content is not NULL, write it to the file */
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}

		byt_write = write(des, text_content, len);
		if (byt_write == (-1) || (size_t)byt_write != len)
		{
			close(des);
			return (-1);
		}
	}

	/* Close the file and return 1 if is success */
	close(des);
	return (1);
}
