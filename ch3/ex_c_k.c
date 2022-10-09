/*****Chapter-3 Exercise[C] Output ****/
/*****Author: Deepshikha Date:28/08/2022****/
#include <stdio.h>
#include <math.h>

int main()
{
	int x, y, r;
	int x1, y1;
	float d;
	
	printf("Enter the coordinates (x, y) of center of circle: ");
	scanf("%d %d", &x, &y);
	
	printf("Enter the radius of circle: ");
	scanf("%d", &r);
	
	printf("Enter a point(x1, y1) to check if it fall inside circle, on circle, or outside circle: ");
	scanf("%d %d", &x1, &y1);
	
	d =  sqrt(pow(x1-x,2) + pow(y1-y,2));
	
	if(d > r)
	{
		printf("The point (%d, %d) is outside the cicle\n", x1, y1);
	}
	else if(d<r)
	{
		printf("The point (%d, %d) is inside the cicle\n", x1, y1);
	}
	else
	{
		printf("The point (%d, %d) is on the cicle\n", x1, y1);
	} 
	return 0;
}
