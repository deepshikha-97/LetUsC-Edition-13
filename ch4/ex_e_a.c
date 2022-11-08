/*****Chapter-4 [E] Output ****/
/*****Author: Deepshikha Date:08/10/2022****/
#include <stdio.h>

int main()
{
	int i = 0, j = 0;
	
	printf("Prime number: %d\n",1);	
	for(i =  2; i <= 300; i++)
	{
		for(j = 2; j < i; j++)
		{
			if(i % j != 0)
				continue;
			else 
				break;
		}
		if(j == i)
			printf("Prime Number : %d\n",i);
	} 
	
	return 0;
}
