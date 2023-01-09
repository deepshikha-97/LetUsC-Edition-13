/*****Chapter-6 [D] Output ****/
/*****Author: Deepshikha Date:21/12/2022****/
#include <stdio.h>
void roman(int y);
int main()
{
	int year, result;
	printf("Enter a year to convert in Roman: ");
	scanf("%d",&year);
	roman(year);
	return 0;
}

void roman(int y)
{
	int i  = 0;
	printf("Roman Equivalent of %d is ", y);
	while(y > 4)
	{
		if( (y/1000) != 0)
		{
			for(i = 0; i < (y/1000); i++)
				printf("m");
			y = y % 1000;
		}
		else if((y/500) != 0)
		{
			for(i = 0; i < (y/500); i++)
				printf("d");
			y = y % 500;
		}
		else if((y/100) != 0)
		{
			for(i = 0; i < (y/100); i++)
				printf("c");
			y = y % 100;
		}
		else if((y/50) != 0)
		{
			for(i = 0; i < (y/50); i++)
				printf("l");
			y = y % 50;
		}
		else if((y/10) != 0)
		{
			for(i = 0; i < (y/10); i++)
				printf("x");
			y = y % 10;
		}
		else if((y/5) != 0)
		{
			for(i = 0; i < (y/5); i++)
				printf("v");
			y = y % 5;
		}

	}
	for(i = 0; i < y; i++)
		printf("i");
	printf("\n");
}
