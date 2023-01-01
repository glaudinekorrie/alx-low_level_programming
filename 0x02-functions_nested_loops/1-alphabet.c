#include<stdio.h>
#include<stdlib.h>
/**
 * main - Execution starts
 *
 * Return: value is 0(Sccess)
 */
void print_alphabet(void)
{
	char n;

	for (n >= 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
}

int main(void)
{
	print_alphabet();
	return(0);
}
