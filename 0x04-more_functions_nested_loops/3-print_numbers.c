#include <stdio.h>
#include "main.h"
/**
 *print-numbers - execution starts
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
