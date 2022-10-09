/*****Chapter-2 Exercise[C] Output ****/
/*****Author: Deepshikha Date:24/08/2022****/
#include <stdio.h>

int main()
{
	int len, breadth;
	int area, per; 
	
	printf("Enter the length and breadth of rectangle:  ");
	scanf("%d %d",&len, &breadth);
	
	area = len * breadth;
	per = 2*(len+breadth);	
	
	printf("Area of Rectangle: %d Perimemter of Rectangle:%d\n", area, per);	
	if(area > per)
		printf("Area of rectangle is greater than perimeter\n");
	else	
		printf("Area of rectangle is lesser than perimeter\n");
	return 0;
}
