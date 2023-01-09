/*****Chapter-6 [G] Output ****/
/*****Author: Deepshikha Date:07/01/2023****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void fibonacci(int a, int b, int c);
int main()
{
	int n;
	printf("Enter the numbers you want in fibonacci series: ");
	scanf("%d", &n);
	printf("Fibonacci Sequence: ");
	printf("1 ");
	fibonacci(0, 1, n);
	return 0;
}

void fibonacci(int a, int b, int c)
{
	int next_num;
	next_num  = a + b;
	a = b;
	b = next_num;
	c = c - 1;
	printf("%d ", next_num);
	if(c > 0)
		fibonacci(a, b, c);
	else
	{
		printf("\n");
		exit(0);
	}
		
}
