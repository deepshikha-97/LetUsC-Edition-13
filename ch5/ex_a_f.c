/*****Chapter-5 [A] Output ****/
/*****Author: Deepshikha Date:08/11/2022****/
#include <stdio.h>

int main()
{
	int i = 1;
	
	switch(i-2)
	{
		case -1:
			printf("Feeding Fish\n");
		case 0:
			printf("Wedding Grass\n");
		case 1:
			printf("Mending roof\n");	
		default:
			printf("Just to survive\n");
	}
	return 0;
}
