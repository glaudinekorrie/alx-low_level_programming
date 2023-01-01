#include<unistd.h>
/**
 * _putchar_ writes char n to stdout
 *
 * Return: value is 1(Success)
 */
int _putchar(char n)
{
	return (write(1, &n, 1));
}
