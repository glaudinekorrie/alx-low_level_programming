#include<stdio.h>
#include<stdlib.h>
/**
 * main - Excecution starts
 *
 * Return: value is 0 (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	for (letters = 'A'; letters <= 'Z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');

	return (0);
}
