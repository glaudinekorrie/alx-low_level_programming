#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include "main.h"
/**
 * _isalpha - to be executed
 *
 * @c: to be checked
 *
 * Return: value is 0 or 1
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
