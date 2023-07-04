#include <stdio.h>

/**
 * _memcpy - function to be executed
 * @dest : pointer
 * @src : pointer
 * @n : bytes
 *
 * Return: char value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	       *(src + i) = *(dest + i);
	}
	return (dest);
}

