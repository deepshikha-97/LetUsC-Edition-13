/*****Chapter-3 Exercise[C] Output ****/
/*****Author: Deepshikha Date:15/09/2022****/
#include <stdio.h>

int main()
{
	int year = 0, leap_year =  0, non_leap_year = 0, total_days = 0, i = 0;
	
	printf("Enter the year: ");
	scanf("%d",&year);
	
	for(i = 0; i < (year-1); i++)
	{	
		if((year%100 == 0 && year%400 == 0) || (year%100 != 0 && year%4 == 0))
			leap_year++;
		else
			non_leap_year++;
	
	}	
	total_days = leap_year*366 + non_leap_year*365 + 1;
	if(total_days%7 == 1)
		printf("Day on 1st January:Monday");
	else if(total_days%7 == 2)
		printf("Day on 1st January:Tuesday");
	else if(total_days%7 == 3)
		printf("Day on 1st January:Wednesday");
	else if(total_days%7 == 4)
		printf("Day on 1st January:Thursday");
	else if(total_days%7 == 5)
		printf("Day on 1st January:Friday");
	else if(total_days%7 == 6)
		printf("Day on 1st January:Saturday");
	else if(total_days%7 == 0)
		printf("Day on 1st January:Sunday");
	return 0;
}
