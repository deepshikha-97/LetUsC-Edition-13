/*****Chapter-6 [G] Output ****/
/*****Author: Deepshikha Date:07/01/2023****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float area_triangle(int x1, int y1, int x2, int y2, int x3, int y3);
int inside_triangle(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y);
float distance(int x1, int y1, int x2, int y2);
int main()
{
	int x1, x2, x3;
	int y1, y2, y3;
	int x, y;
	float area;
	float a1, a2, a3;
	int in = 0;
	printf("Enter the vertices of triange: ");
	printf("A(x1, y1): ");
	scanf("%d %d", &x1, &y1);
	printf("B(x2, y2): ");
	scanf("%d %d", &x2, &y2);
	printf("C(x3, y3): ");
	scanf("%d %d", &x3, &y3);
	area = area_triangle(x1, y1, x2, y2, x3, y3);
	printf("The area of triangle is %f\n", area);
	
	printf("Enter a point P(x, y) to check if it is inside or outside of the triangle: ");
	scanf("%d %d", &x, &y);
	in = inside_triangle(x1, y1, x2, y2, x3, y3, x, y);
	
	if(in == 1)
		printf("Point (%d, %d) lies inside the triangle\n", x, y);
	else
		printf("Point (%d, %d) does not lie inside the triangle\n", x, y);
	return 0;
}

float area_triangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
	float S, area;
	float a, b, c;
	a = distance(x1, y1, x2, y2);
	b = distance(x2, y2, x3, y3);
	c = distance(x3, y3, x1, y1);
	S = (a + b + c)/2.0;
	area = sqrt(S * (S - a) * (S - b) * (S - c));
	return area;
}
float distance(int x1, int y1, int x2, int y2)
{
	float d = 0;
	d = sqrt(pow(x2-x1, 2) + pow(y2 - y1, 2));
	return d;
}
int inside_triangle(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{
	float area;
	float a1, a2, a3;
	area = area_triangle(x1, y1, x2, y2, x3, y3);
	a1 = area_triangle(x1, y1,  x2, y2, x, y);
	a2 = area_triangle(x2, y2,  x3, y3, x, y);
	a3 = area_triangle(x1, y1,  x3, y3, x, y);
	
	return (abs(area - (a1 + a2 + a3)) < 1e-9);

}
