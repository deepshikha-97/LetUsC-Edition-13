/*****Chapter-4 [E] Output ****/
/*****Author: Deepshikha Date:08/11/2022****/
#include <stdio.h>
int ncr(int n, int r);
int main()
{
	int i = 0, j = 0, num = 0;
	int no_of_line = 6;
	
	for(i = 0; i < no_of_line; i++)
	{
		num = 0;
		for(j = 0; j < no_of_line-i; j++)
		{
			printf(" ");
		}
		for(j = 0; j < (i+1); j++)
		{
			num = ncr(i,j);	
			printf("%d ",num);
		}
		for(j = 0; j < no_of_line-i; j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}

int ncr(int n, int r)
{
	int res;
	int fact_n = 1, fact_n_r = 1, fact_r = 1;
	int i = 0;
	
	for(i = 1; i <= n; i++)
		fact_n = fact_n * i; 	

	for(i = 1; i <= n-r; i++)
		fact_n_r = fact_n_r * i; 	

	for(i = 1; i <= r; i++)
		fact_r = fact_r * i;
 	
	res = fact_n/(fact_n_r*fact_r);

	return res;
}

