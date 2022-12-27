#include<stdio.h>
#include<stdlib.h>
/**
 * main -execuiton tarts
 *
 * Return: value is 0(Success)
 */
int main(void)
{
	int i, j;
	int max = 100;

	for (i = 0; i < max; i++)
	{
		for (j = i + 1; j < max; j++)
		{
			putchar(i /10 +'0');
			putchar(j % 10 + '0');
			putchar(' ');

			putchar(j /10 + '0');
			putchar(j % 10 + '0');

			if (i != 98 && j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
