#include"main.h"
#include<stdio.h>

/*
 * print_to_98: Where execution starts
 *
 * return : value is printed values upto 98
 *
 */
void print_to_98(int n)
{
	while(n <= 98)
	{
		printf("%d, ", n);

		n++;
	}
	_putchar('\n');
}
