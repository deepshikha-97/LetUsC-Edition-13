/*****Chapter-4 [E] Output ****/
/*****Author: Deepshikha Date:08/10/2022****/
#include <stdio.h>

int main()
{
	int i = 0, j = 0, n = 0, m = 0;
	
	for(i = 0; i < 7; i++)
	{
		for(j = 0; j < (7-i); j++)
		{
			printf("%c ",j+65);
		}
		for(m = 0; m < 2*i-1; m++)
			printf("  ");
		if( i == 0)
		{
			for(n = j - 2; n >= 0; n--)
				printf("%c ",n+65);
		}
		else
		{
			for(n = j - 1; n >= 0; n--)
				printf("%c ",n+65);
		}
		printf("\n");
	}	
	return 0;
}
