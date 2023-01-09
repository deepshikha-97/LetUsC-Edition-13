/*****Chapter-6 [G] Output ****/
/*****Author: Deepshikha Date:07/01/2023****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float area_triangle(int a, int b, int c);
int main()
{
	int x, y, z;
	float area;
	printf("Enter the sides of triangle: ");
	scanf("%d %d %d", &x, &y, &z);
	area = area_triangle(x, y, z);
	printf("The area of triangle is %f\n", area);
	return 0;
}

float area_triangle(int a, int b, int c)
{
	float S, area;
	S = (a + b + c)/2.0;
	area = sqrt(S * (S - a) * (S - b) * (S - c));
	return area;
}
