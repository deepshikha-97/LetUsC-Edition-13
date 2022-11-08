/*****Chapter-4 [E] Output ****/
/*****Author: Deepshikha Date:07/11/2022****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i = 0, j = 0, k  = 0;
	int no_of_time = 0, last_k = 0, ramanujan_flag = 0;
	
	for(i = 1; i < 10000000; i++)
	{
		no_of_time =  0;
		for(j = 1; j <= i; j++)
		{
			for(k = j+1; k <= i; k++)
			{
				if(i == (pow(j,3) + pow(k,3)))
				{
					no_of_time++;
					if(no_of_time == 2)
					{
						printf("Smallest Ramanujam Number %d\n", i);
						no_of_time = 0;
						ramanujan_flag = 1;
						
					} 

				}
			}

		}
		if(ramanujan_flag == 1)
			break;
	}	
	return 0;
}
