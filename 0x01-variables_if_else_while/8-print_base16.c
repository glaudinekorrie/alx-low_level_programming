#include<stdio.h>
#include<stdlib.h>
/**
 * main-Execution starts
 *
 * Return: value is 0 (Success)
 */
int main(void)
{
	int n;
	char letter;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
