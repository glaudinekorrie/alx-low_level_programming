#include<stdio.h>
#include "main.h"

/**
 *print_numbers - execution starts
 *@i - value to be read
 *return : always 0
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
