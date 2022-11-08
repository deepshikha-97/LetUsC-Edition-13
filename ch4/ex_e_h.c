/*****Chapter-4 [E] Output ****/
/*****Author: Deepshikha Date:12/10/2022****/
#include <stdio.h>

int main()
{
	int i = 0, j = 0, num = 0;
	int no_of_line = 4;
	
	for(i = 0; i < no_of_line; i++)
	{
		for(j = 0; j < no_of_line-i; j++)
		{
			printf(" ");
		}
		for(j = 0; j < (i+1); j++)
		{
			num++;
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
