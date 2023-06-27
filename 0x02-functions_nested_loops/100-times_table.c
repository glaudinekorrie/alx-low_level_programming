#include <stdio.h>
#include "main.h"

/**
  * print_times_table - Prints a multiplication table up to param
  * @n: The number to be treated
  *
  * Return: Number matrix
  */

void print_times_table(int n)
{
	int i;
	int j;

	while (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			/*_putchar('0');*/
			for (j = 1; j <= n; j++)
			{
				int z = i * j;

				/*
				 *_putchar(',');
				 *_putchar(' ');
				 */
				_putchar(z);
			}
		}
		_putchar('\n');
	}
}
