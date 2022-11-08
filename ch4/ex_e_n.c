/*****Chapter-4 [E] Output ****/
/*****Author: Deepshikha Date:28/10/2022****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float ppl = 100000;
	float r = 10;
	int i = 0;
	
	for(i = 0; i < 10; i++)
	{
		ppl = ppl + ((ppl*r)/100);
		printf("Population at the end of %d is %f\n", (i+1), ppl);
	}
	
	return 0;
}
