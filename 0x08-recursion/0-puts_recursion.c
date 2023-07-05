#include <stdio.h>
#include "main.h"

/**
 *  _puts_recursion - function where executoin starts
 *  @s : characters in the word
 *  Return: return the charcters in the word
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
