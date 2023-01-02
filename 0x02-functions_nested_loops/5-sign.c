#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/*
 * print_sign - to be executed
 *
 * @n: to be checked
 *
 * Return: value is 1 or 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
	_putchar('\n');
}
