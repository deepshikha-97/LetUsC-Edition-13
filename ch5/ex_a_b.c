/*****Chapter-5 [A] Output ****/
/*****Author: Deepshikha Date:08/11/2022****/
#include <stdio.h>

int main()
{
	int c = 3;
	
	switch(c)
	{
		case '3': 
			printf("You never win the silver prize\n");
			break;
		case 3:
			printf("You always lose the gold prize\n");
			break;
		default:
			printf("Of course provided you win a prize\n");	
	}	
	
	return 0;
}
