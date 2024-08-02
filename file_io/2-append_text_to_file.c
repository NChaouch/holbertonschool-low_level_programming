#include "main.h"
/**
 * append_text_to_file - function that appends
 * text at the end of a file.
 * @filename: the pointer to the const char.
 * @text_content: the pointer to the char.
 * Return: 1 if success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int des;
	ssize_t byt_write;
	size_t len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	/* Open the file in append (ajout) mode and read */
	des = open(filename, O_WRONLY | O_APPEND);
	if (des == (-1))
	{
		return (-1);
	}

	/* If text_content is not NULL, write it to the file */
	if (text_content != NULL)
	{
		/* Calculate the length of the text_content */
		while (text_content[len] != '\0')
		{
			len++;
		}

		/* Write the text_content to the file */
		byt_write = write(des, text_content, len);
		if (byt_write == (-1))
		{
			close(des);
			return (-1);
		}
	}

	/* Close the file and return 1 if is success */
	close(des);
	return (1);
}

