/*****Chapter-3 Exercise[C] Output ****/
/*****Author: Deepshikha Date:02/10/2022****/
#include <stdio.h>

int main()
{
	int year = 0;
	
	printf("Enter the year: ");
	scanf("%d",&year);
	
	((year%100 == 0 && year%400 == 0) || (year%100 != 0 && year%4 == 0))?printf("Year: %d is leap year\n", year):printf("Year: %d is not leap year\n", year);
	return 0;
}
