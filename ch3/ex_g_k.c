/*****Chapter-3 Exercise[G] Output ****/
/*****Author: Deepshikha Date:24/09/2022****/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int month, date;
	
	printf("Enter date and month for Zodiac sign: ");
	scanf("%d %d", &date, &month);
	
	if(month > 12 || date > 31)
	{
		printf("Check month and date. Either of that is beyind the limit\n");
		exit(0);
	}
	
	if((month == 12 && date >= 22) || (month == 1 && date <=19))
		printf("Zodiac Sign: Capricorn\n");
	else if((month == 1 && date >= 22) || (month == 2 && date <=17))
		printf("Zodiac Sign: Aquaris\n");
	else if((month == 2 && date >= 18) || (month == 3 && date <=19))
		printf("Zodiac Sign: Pisces\n");
	else if((month == 3 && date >= 20) || (month == 4 && date <=19))
		printf("Zodiac Sign: Aries\n");
	else if((month == 4 && date >= 20) || (month == 5 && date <=20))
		printf("Zodiac Sign: Taurus\n");
	else if((month == 5 && date >= 21) || (month == 6 && date <=20))
		printf("Zodiac Sign: Gemini\n");
	else if((month == 6 && date >= 21) || (month == 7 && date <=22))
		printf("Zodiac Sign: Cancer\n");
	else if((month == 7 && date >= 23) || (month == 8 && date <=22))
		printf("Zodiac Sign: Leo\n");
	else if((month == 8 && date >= 23) || (month == 9 && date <=22))
		printf("Zodiac Sign: Virgo\n");
	else if((month == 9 && date >= 23) || (month == 10 && date <=22))
		printf("Zodiac Sign: Libra\n");
	else if((month == 10 && date >= 23) || (month == 11 && date <=21))
		printf("Zodiac Sign: Scorpio\n");
	else if((month == 11 && date >= 22) || (month == 12 && date <=21))
		printf("Zodiac Sign: Sagittarius\n");
	
	return 0;
}
