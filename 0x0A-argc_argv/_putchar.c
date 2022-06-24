#include <unistd.h>
/**
 * _putchar - a func that writes the char c to stdout
 * @c: the character to print
 *
 * Return: Always (0) success
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
