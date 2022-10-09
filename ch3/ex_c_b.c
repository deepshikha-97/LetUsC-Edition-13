/*****Chapter-2 Exercise[C] Output ****/
/*****Author: Deepshikha Date:24/08/2022****/
#include <stdio.h>

int main()
{
	int number;
	
	printf("Enter any integer number: ");
	scanf("%d",&number);
	
	if((number%2)==0)
		printf("Entered number %d is even number\n",number);
	else
		printf("Entered number %d is odd number\n",number);

	return 0;
}
