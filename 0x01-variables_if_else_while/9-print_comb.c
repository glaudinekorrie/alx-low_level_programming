#include<stdio.h>
#include<stdlib.h>
/**
 * main -Execution starts
 *
 * Return: value is 0 (Success)
 */
int main(void)
{
	int i, j;

	for(i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

