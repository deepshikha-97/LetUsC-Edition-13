/*****Chapter-6 [E] Output ****/
/*****Author: Deepshikha Date:21/12/2022****/
#include <stdio.h>
float circle(int);

int main()
{
	float area;
	int radius = 1;
	area = circle(radius);
	printf("%f\n",area);
	return 0;
}

float circle(int r)
{
	float a;
	a = 3.14*r*r;
	return(a);
}
