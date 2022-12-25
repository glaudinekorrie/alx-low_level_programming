#include<stdio.h>
#include<stdlib.h>
/**
 * main-execution starts
 *
 * Return: value is 0(Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n % 10);
	}
	putchar('\n');
	return (0);
}
