#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * _islower - Checks for lowercase
 *
 * @c: to be checked
 *
 * Return: Value is 1 0r 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
