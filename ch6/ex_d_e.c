/*****Chapter-6 [D] Output ****/
/*****Author: Deepshikha Date:21/12/2022****/
#include <stdio.h>
void primefactors(int n);
int main()
{
	int num;
	printf("Enter a number to obtain prime factors: ");
	scanf("%d",&num);
	primefactors(num);
	return 0;
}

void primefactors(int n)
{
	int i = 2, j = 0, n1 = 0;
	while(n > 1)
	{
		while((n%i) == 0)
		{
			printf("%d ", i);
			n = n/i;
		}
		//printf("%d\n",i);
		i++;
	}
	printf("\n");		
			
}
