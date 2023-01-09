/*****Chapter-6 [D] Output ****/
/*****Author: Deepshikha Date:21/12/2022****/
#include <stdio.h>
void checkleapyear(int y);
int main()
{
	int year;
	printf("Enter a year to convert in Roman: ");
	scanf("%d",&year);
	checkleapyear(year);
	return 0;
}

void checkleapyear(int y)
{
	if((y%100) == 0)
	{
		if((y%400) == 0)
			printf("Year %d is leap year.\n", y);
		else
			printf("Year %d is not leap year.\n", y);
	}
	else if((y%4) == 0)
		printf("Year %d is leap year.\n", y);
	else
		printf("Year %d is not leap year.\n", y);
			
}
