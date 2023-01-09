/*****Chapter-6 [G] Output ****/
/*****Author: Deepshikha Date:02/01/2023****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void prime_fact(int num, int i);
int main()
{
	int n, i = 2;
	printf("Enter a positive number to know prime factor: ");
	scanf("%d", &n);
	if(n < 0)
	{
		printf("Enter a positive number\n");
		exit(0);
	}
	printf("The prime factors of %d are ", n);
	prime_fact(n, i);
	return 0;
}

void prime_fact(int num, int i)
{
	
	if(num > 1)
	{
		while((num % i) == 0)
		{
			printf("%d ", i);
			num = num / i;
		}
		i++;
		prime_fact(num, i);

	}
	else
		printf("\n");
			
}
