/*****Chapter-6 [G] Output ****/
/*****Author: Deepshikha Date:02/01/2023****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void prime_fact(int num);
int main()
{
	int n;
	printf("Enter a positive number to know prime factor: ");
	scanf("%d", &n);
	if(n < 0)
	{
		printf("Enter a positive number\n");
		exit(0);
	}
	printf("The prime factors of %d are ", n);
	prime_fact(n);
	return 0;
}

void prime_fact(int num)
{
	int i = 2;
	while(num > 1)
	{
		while((num%i) == 0)
		{
			printf("%d ", i);
			num = num / i;
		}
		i++;
	}
	printf("\n");
			
}
