#include <stdio.h>

/**
 * _memset()- function to be executed
 * @s : pointer
 * @b : variable
 * @n : amount of space
 *
 * Return: char with result of memset
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
