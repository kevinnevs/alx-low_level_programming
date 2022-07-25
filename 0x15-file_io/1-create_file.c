#include "main.h"
/**
 * create_file - a function that creates file
 * @filename: name of the file
 * @text_content: NUL terminated string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp, len = 0;
	long int wrote;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		wrote = write(fp, text_content, len);
		if (wrote == -1)
			return (-1);
	}
	if (close(fd) -1)
		return (-1);
	return (1);
}
