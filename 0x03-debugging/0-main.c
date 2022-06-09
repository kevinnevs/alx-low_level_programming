#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
int main(void)
{
	int i, n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = 0;
	positive_or_negative(i);

	return (0);
}
