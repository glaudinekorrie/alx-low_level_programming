#include<stdio.h>
#include<stdlib.h>
/**
 * main- Execution starts
 *
 * Return: value is 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
