/*****Chapter-5 [B] Output ****/
/*****Author: Deepshikha Date:08/11/2022****/
#include <stdio.h>

int main()
{
	int temp;
	scanf("%d",&temp);
	switch(temp)
	{
		case(temp <= 20):
			printf("Ooooooooohhhhh! Damn Cool!\n");
		case(temp > 20 && temp <= 30):
			printf("Rain raiin here again!\n");
		case(temp > 30 && temp <= 40):
			printf("Wish I am on Everest\n");
		default:
			printf("Good old nagpur weather\n");	
	}
	
	return 0;
}
