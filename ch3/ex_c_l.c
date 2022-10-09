/*****Chapter-3 Exercise[C] Output ****/
/*****Author: Deepshikha Date:28/08/2022****/
#include <stdio.h>
#include <math.h>

int main()
{
	int x, y;
	
	printf("Enter the coordinates (x, y): ");
	scanf("%d %d", &x, &y);
	
	if((x == 0) && (y !=0))
		printf("Point lies on y-axis\n");
	else if((x != 0) && (y ==0))
		printf("Point lies on x-axis\n");
	else if((x == 0) && (y ==0))
		printf("Point lies on origin\n");
	else
		printf("Point do not lie on x-axia, y-axis, or origin\n");
	return 0;
}
