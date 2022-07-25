#include "main.h"
/**
 * read_textfile - a function that reades file
 * @filename: the file name to be read
 * @letter: characters to read
 * Return: printed letters count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, printed, wrote;
	char *buff;

	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fp = open(filename, 0_RDWR);
	if (fp == -1)
		return (0);
	printed = read(fp, buff, letters);
	if (printed == -1)
		return (0);
	wrote = write(STDOUT_FILENO, buff, printed);
	if (wrote == -1)
		return (0);
	if (close(fp) == -1)
		return (0);
	free(buff);
	return (printed);
}
