/*****Chapter-5 [A] Output ****/
/*****Author: Deepshikha Date:08/11/2022****/
#include <stdio.h>

int main()
{
	char suite = 3;
	
	switch(suite)
	{
		case 1: 
			printf("Diamond\n");
		case 2:
			printf("Spade\n");
		default:
			printf("Heart\n");
	}
	printf("I thought one wears a suite\n");	
	return 0;
}
