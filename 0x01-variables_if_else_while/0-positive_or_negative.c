#include<stdio.h>
/**
 * main :Execution begins
 * return:value is zero
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		prinf("The number is positive",n);
	}
	else if (n==0)
	{
		printf("The number is zero",n);
	}
	else 
	{
		printf("The number is negative",n);
	}
	return 0;
}
