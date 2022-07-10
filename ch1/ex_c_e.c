/***Calculating area and perimeter of rectangle and circle***/
/***Date : 07/07/2022 Author: Deepshikha***/
/*** Formula For Rectangle: Area = length*breadth, Perimeter = 2*(length + breadth)***/
/*** Formula For Circle: Area = pi*radius*radius, Perimeter = 2*pi*radius   ***/

#include <stdio.h>

int main()
{
	float length, breadth, radius, pi = 3.14;
	float r_peri, r_area, c_area, c_peri;
	
	printf("Enter the length and breadth of rectangle: ");
	scanf("%f %f",&length, &breadth);
	
	r_area = length*breadth;
	r_peri = 2*(length + breadth);
	
	printf("Area of rectangle : %f\n Perimeter of Rectangle : %f\n",r_area, r_peri);

	printf("Enter the radius of circle : ");
	scanf("%f",&radius);
	
	c_area = pi*radius*radius;
	c_peri = 2*pi*radius;
	printf("Area of circle : %f\n Perimeter of circle : %f\n",c_area, c_peri);

	return 0;
}
