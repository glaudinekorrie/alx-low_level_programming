#include<stdio.h>
#include "main.h"

/**
 *main - execution starts
 *return : always 0
 */

void print_numbers(void)
{
	int x;
	for (x = 0; x <= 9; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
