/*****Chapter-3 Exercise[G] Output ****/
/*****Author: Deepshikha Date:15/09/2022****/
#include <stdio.h>

int main()
{
	int year = 0;
	
	printf("Enter the year: ");
	scanf("%d",&year);
	
	if((year%100 == 0 && year%400 == 0) || (year%100 != 0 && year%4 == 0))
		printf("Year: %d is leap year\n", year);
	else
		printf("Year: %d is not leap year\n", year);
		
	return 0;
}
