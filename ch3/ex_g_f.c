/*****Chapter-3 Exercise[G] Output ****/
/*****Author: Deepshikha Date:24/09/2022****/
#include <stdio.h>
#include <math.h>

int main()
{
	int s1, s2, s3;
	
	printf("Enter the three sides of triangle: ");
	scanf("%d %d %d", &s1, &s2, &s3);
	
	if(s1 == s2 && s1 == s3)
	{
		printf("Triangle is an equilateral triangle\n");
	}
	else if(((s1 == s2)&&(s1 != s3)) || ((s2 == s3)&&(s2 != s3)) || ((s1 == s3)&&(s1 != s2)))
	{
		printf("Triangle is an isosceles triangle\n");
	}
	else
	{
		printf("Triangle is a scalene triangle\n");
	}

	if((s1 > s2) && (s1 > s3) && (s1 == sqrt(pow(s2,2)+pow(s3,2))))
	{
		printf("Triangle is a right angle triangle\n");
	}
	else if((s2 > s1) && (s2 > s3) && (s2 == sqrt(pow(s1,2)+pow(s3,2))))
	{
		printf("Triangle is a right angle triangle\n");
	}
	else if((s3 > s1) && (s3 > s2) && (s3 == sqrt(pow(s1,2)+pow(s2,2))))
	{
		printf("Triangle is a right angle triangle\n");
	}
	return 0;
}
