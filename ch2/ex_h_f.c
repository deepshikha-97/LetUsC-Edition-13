/*****Attempt the following : H
Calculate area of triangle if three sides of the triangle is given
Here math library is used so if program  is compiled in Linux -lm to include in the compiler option
 ****/

/*****Author: Deepshikha Date:24/07/2022****/


#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	float peri, area;
	printf("Enter length of three sides of triangle: ");
	scanf("%d %d %d",&a, &b, &c);
	
	peri = (a + b + c)/2.0;	
	area = sqrt(peri * (peri-a)*(peri-b)*(peri-c));

	printf("Area of Triangle %f\n",area);
	return 0;
}
