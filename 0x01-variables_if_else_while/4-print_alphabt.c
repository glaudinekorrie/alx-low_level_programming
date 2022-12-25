#include<stdio.h>
#include<stdlib.h>
/**
 * main - Executon starts
 *
 * Return:Value is 0(Success)
 */
int main(void)
{
	char letter, miss1, miss2;

	miss1 = 'e';
	miss2 = 'q';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != miss1 && letter != miss2)
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
