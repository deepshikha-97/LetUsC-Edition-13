/*****Chapter-4 [E] Output ****/
/*****Author: Deepshikha Date:28/10/2022****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i = 0, j = 0, k = 0;
	
	for(i = 0; i < 30; i++)
	{
		for(j = 0; j < i; j++)
		{
			for(k = 0;  k < i; k++)
			{
				if(pow(i, 2) == (pow(j, 2) + pow(k, 2)))
					printf("Pythogorean Triplets: %d, %d, %d\n", i, j, k);
			}
		}
	}  

	
	return 0;
}
