/*****Chapter-4 [E] Output ****/
/*****Author: Deepshikha Date:28/10/2022****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int hours = 24;
	int i = 0;
	
	for(i = 0; i < hours; i++)
	{
		if(i == 0)
			printf("Hours: %d and It is Midnight\n", i);
		else if(i > 0 && i < 12)
			printf("Hours: %d and It is %d AM\n", i, i);
		else if(i == 12)
			printf("Hours: %d and It is noon\n", i);
		else
			printf("Hours: %d and It is %d PM\n", i, i-12);
	} 	
	return 0;
}
