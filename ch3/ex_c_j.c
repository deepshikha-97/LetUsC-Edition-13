/*****Chapter-2 Exercise[C] Output ****/
/*****Author: Deepshikha Date:15/09/2022****/
#include <stdio.h>

int main()
{
	int x1, y1,  x2, y2, x3, y3;
	float m1, m2;
	
	printf("Enter Points:\n");
	printf("(x1,y1)");
	scanf("%d %d",&x1, &y1);
	printf("(x2,y2)");
	scanf("%d %d",&x2, &y2);
	printf("(x3,y3)");
	scanf("%d %d",&x3, &y3);
	
	m1 = (y2-y1)/(x2-x1);
	m2 = (y3-y2)/(x3-x2);
	
	if(m1 == m2)
		printf("Points are collinear\n");
	else
		printf("Points are not collinear\n");

	return 0;
}
