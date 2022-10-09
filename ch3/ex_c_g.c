/*****Chapter-2 Exercise[C] Output ****/
/*****Author: Deepshikha Date:24/08/2022****/
#include <stdio.h>

int main()
{
	int angle1, angle2, angle3;
	
	printf("Enter the all three angles of the triangle: ");
	scanf("%d %d %d",&angle1, &angle2, &angle3);
	
	if((angle1 + angle2 + angle3) == 180)
		printf("Triangle is valid\n");
	else
		printf("Triangle is not valid\n");
			
	return 0;
}
