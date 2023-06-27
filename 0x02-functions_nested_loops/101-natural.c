#include<stdio.h>

/**
 * main - execution starts
 *
 * @i - value to be read
 * @j - vakue to be read
 * @k - value to be read
 * return : sum
 */
int main()
{
	int i;
	int j;
	int k;
	int sum;

	for (i = 0; i < 10; i++)
	{
		j = i % 3;
		k = i % 5;
		if(j == 0 || k == 0)
		{
			sum = 0;
			sum = sum + i;
		}
	}
	putchar(sum);
	return (0);
}

