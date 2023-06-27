#include<stdio.h>

/**
 * main - execution starts
 *
 * @i - value to be read
 * @j - vakue to be read
 *
 * return : 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 1023; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j = 0;
			j += i;
		}
	}
	printf("%d\n", j);
	return (0);
}

