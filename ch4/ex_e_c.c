/*****Chapter-4 [E] Output ****/
/*****Author: Deepshikha Date:08/10/2022****/
#include <stdio.h>

int main()
{
	int i = 0, j = 0, fact=  1;
	float sum = 0;
	
	for (i = 1; i <= 7; i++)
	{
		fact = 1;
		for(j = 1; j <= i; j++)
			fact = fact*j;

		sum  = sum + (i*1.0)/fact;
	}
	
	printf("Sum = %f\n", sum);
		
	return 0;
}
