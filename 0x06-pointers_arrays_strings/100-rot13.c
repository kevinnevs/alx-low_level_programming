#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @s: the string to encrypt
 *
 * Return: returning the encrypted string
 */
char *rot13(char *s)
{
	int i;
	int j;

	char A[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char B[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; A[j] != '\0'; j++)
		{
			if (s[i] == A[j])
			{
				s[i] = B[j];
			}
		}
	}
	return (s);
}

