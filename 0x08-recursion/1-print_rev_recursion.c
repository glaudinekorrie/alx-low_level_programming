#include <stdio.h>
#include "main.h"

/**
 * print_rev_recursion.c - funciton tobe executed
 * @s - character variable
 * Return : return te word in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
