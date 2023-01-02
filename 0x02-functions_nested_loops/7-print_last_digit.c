#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * print_last_digit - to be executed
 *
 * @r: to be checked
 *
 * Return: value is 0
 */
int print_last_digit(int r)
{
	int last;

	if (r < 0)
	{
		r = -r;
	}

	last = r % 10;
	if (last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');
	return (last);
}
