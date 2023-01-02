#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * times_table - to be executed
 *
 * Return: value is 0
 */
void times_table(void)
{
	int x, y;

	while ( x <= 9)
	{
		for (y = 0; y <= 9; y++)
		{
			_putchar(x * y);
		}
		x++;
	}
}
