#ifndef MAIN_H
#define MAIN_H
/**
 * _isupper - a function that checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c);
/**
 * _isdigit -  a function that checks for a digit 0-9
 * @c: input
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);
/**
 * mul - multiplier
 * @: int to mult
 * @b: int to mult
 * Return: result of multpilication
 */
int mul(int a, int b);
/**
 * print_numbers - print the numbers
 *
 */
void print_numbers(void);
/**
 * print_most_numbers - print 0 to 9, skip 2 and 4
 */
void print_most_numbers(void);
/**
 * more_numbrs - a function that prints 10 time sthe numbers, from 0 to 14
 * _putchar only 3 times
 * Return: 0-14 x10 followed by new line
 */
void more_numbers(void);
/**
 * print_line - prints a line
 *
 * @n: integer to print stuff?
 */
void print_line(int n);
/**
 * print_diagonal - prints diagonal
 *
 * @n: integer to set diagonal
 */
void print_diagonal(int n);

#endif
