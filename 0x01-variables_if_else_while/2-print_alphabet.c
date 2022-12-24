#include<stdio.h>
#include<stdlib.h>
/**
 * main - Execution starts
 *
 * Return: Value 0(Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}

