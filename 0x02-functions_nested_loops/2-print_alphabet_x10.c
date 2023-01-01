#include"main.h"
/**
 * print_alphabet_x10 - Execution starts
 *
 * return: value is void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; i++)
		{
			_putchar(c);
		}
		_putchar('\n');

		i++;
	}
}
