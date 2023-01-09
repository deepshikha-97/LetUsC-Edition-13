/*****Chapter-6 [G] Output ****/
/*****Author: Deepshikha Date:07/01/2023****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sum_natural_num(int n); 
int main()
{
	int n;
	int sum;
	printf("Enter the number to know the sum of natural numbers till that number: ");
	scanf("%d", &n);
	sum = sum_natural_num(n);
	printf("Sum of first %d natural numbers is %d\n", n, sum);
	return 0;
}

int sum_natural_num(int n)
{
	int sum = 0;
	
	if(n > 0)
	{
		sum = n + sum_natural_num(n-1);
	}
	else
	{
		return 0;
	}
	return sum;
}
