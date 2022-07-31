/*****Attempt the following : H
Sum of square of sine and cosine of angle
 ****/

/*****Author: Deepshikha Date:24/07/2022****/


#include <stdio.h>
#include <math.h>

int main()
{
	float angle, result;
	printf("Enter angle in degree: "); 
	scanf("%f",&angle);
	
	result = pow(sin(angle*3.14/180),2)+pow(cos(angle*3.14/180),2);
	printf("Sum of squares of sine and cosine of angle  %f is %f\n", angle, result);
	return 0;
}
