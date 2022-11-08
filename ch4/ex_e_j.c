/*****Chapter-4 [E] Output ****/
/*****Author: Deepshikha Date:12/10/2022****/
#include <stdio.h>

int main()
{
	int y = 1;
	float x = 5.5;
	float i;
	
	printf("y	x	i\n");
	
	for(y = 1; y <= 6; y++)
	{
		for(x = 5.5; x <= 12.5; x += 0.5)
		{
			printf("%d\t%f\t%f\n",y,x,i);
			i  = 2 + (y + 0.5*x);
		}
	} 
	
	return 0;
}
