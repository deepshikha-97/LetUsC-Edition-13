/*****Chapter-2 Exercise[C] Output ****/
/*****Author: Deepshikha Date:24/08/2022****/
#include <stdio.h>

int main()
{
	int num; 
	
	printf("Enter the number:  ");
	scanf("%d",&num);
	
	if(num >= 0)
		printf("Absolute Value: %d\n",num);
	else
		printf("Absolute Value: %d\n",0-num);
	
	return 0;
}
