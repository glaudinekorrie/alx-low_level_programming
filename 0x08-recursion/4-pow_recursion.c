#include<stdio.h>
#include "main.h"

/**
 * _pow_recursion - function to be executed
 * @x: number
 * @y: power value
 * Return: returns 1 on success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
