#include<stdio.h>
#include "main.h"

/**
 * factorial - function to be executed
 * @n: variable
 * Return: return the factorial of 0
 */

int factorial(int n)
{
	if (n < 0 )
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return(n *factorial (n -1));
}
