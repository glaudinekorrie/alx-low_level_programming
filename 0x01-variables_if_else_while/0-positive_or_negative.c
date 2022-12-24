#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main :Execution begins
 * return:value is zero
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand();
	if (n>0)
	{
		printf("%d - The number is positive", n);
	}
	else if (n==0)
	{
		printf("%d - The number is zero", n);
	}
	else 
	{
		printf("%d - The number is negative", n);
	}
	return (0);
}
