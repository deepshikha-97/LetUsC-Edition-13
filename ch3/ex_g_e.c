/*****Chapter-3 Exercise[G] Output ****/
/*****Author: Deepshikha Date:15/09/2022****/
#include <stdio.h>

int main()
{
	int s1, s2, s3;
	
	printf("Enter the three sides of triangle: ");
	scanf("%d %d %d", &s1, &s2, &s3);
	
	if(s1 >= s2 && s1 >= s3)
	{
		if((s2+s3) > s1)
			printf("Triangle is valid\n");
		else
			printf("Triangle is not  valid\n");
	}
	else if(s2 >= s1 && s2 >= s3)
	{
		if((s1+s3) > s2)
			printf("Triangle is valid\n");
		else
			printf("Triangle is not  valid\n");
	}
	else if(s3 >= s1 && s3 >= s2)
	{
		if((s1+s2) > s3)
			printf("Triangle is valid\n");
		else
			printf("Triangle is not  valid\n");
	}
	return 0;
}
