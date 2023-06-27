#include <stdio.h>


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

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int z = i * j;

				if (j == n)
				{
					putchar(z);
				}
				else
				{
					putchar(z);
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
}
