/*****Chapter-3 Exercise[G] Output ****/
/*****Author: Deepshikha Date:15/09/2022****/
#include <stdio.h>

int main()
{
	int num_days;
	
	printf("Enter the number of days the membebr is late to return the book: ");
	scanf("%d",&num_days);
	
	if(num_days <= 5)
		printf("Fine:%f\n",num_days*0.5);
	else if(num_days >= 6 && num_days <= 10)
		printf("Fine:%f\n",(5*0.5) + ((num_days-5)*1));
	else if(num_days > 10 && num_days <= 30)
		printf("Fine:%f\n",(5*0.5) + (5*1) + ((num_days - 10)*5));
	else
		printf("Your Membership is cancelled.\n Pay the Fine:%f\n",(5*0.5) + (5*1) + ((num_days - 10)*5));
	return 0;
}
