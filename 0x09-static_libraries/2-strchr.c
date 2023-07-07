#include <stdio.h>

/**
 * _strchr - function to be executed
 *@s : pointer
 *@c : pointer
 *
 *Return: returns s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
