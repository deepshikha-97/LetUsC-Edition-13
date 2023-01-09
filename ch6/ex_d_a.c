/*****Chapter-6 [D] Output ****/
/*****Author: Deepshikha Date:21/12/2022****/
#include <stdio.h>
int factorial(int n);
int main()
{
	int num, fact;
	printf("Enter a number to calculate factorial: ");
	scanf("%d",&num);
	fact = factorial(num);
	printf("Factorial of %d is %d\n", num, fact);
	return 0;
}

int factorial(int n)
{
	int f = 1, i = 1;
	for(i = 1; i <= n; i++)
	{
		f = f * i;
	}
	return f;
}
