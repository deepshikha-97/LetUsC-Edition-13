/*****Chapter-4 [E] Output ****/
/*****Author: Deepshikha Date:28/10/2022****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float x;
	float nat_log;
	int first_seven = 7, i = 0;
	
	printf("Enter the number for which natural logaritham to be calculated: ");
	scanf("%f", &x);
	
	if(x == 0)
	{
		printf("For 0 logritham is bot defined\n");
		exit(0);
	}
	
	nat_log = (x-1)/x;
	for(i = 1; i < first_seven; i++)
	{
		nat_log = nat_log + (1/2.0)*pow(((x-1)/x),i+1);	
	}
	
	printf("Natural  log of %f is %f\n",x, nat_log); 
	
	return 0;
}
