#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * main - Execution starts
 *
 * Return: value is 0(Sccess)
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}


