/*****Attempt the following : H
Convert Cartesian co-ordinantes to polar co-ordinate
 ****/

/*****Author: Deepshikha Date:24/07/2022****/


#include <stdio.h>
#include <math.h>

int main()
{
	float x,y;
	float r, theta;
	printf("Enter Cartesian Co-ordinate (x,y) to convert it to polar : ");
	scanf("%f %f",&x, &y);
	
	r = sqrt(x*x + y*y);
	theta = atan(x/y) * 180/3.14;
	printf("Cartesian Co-ordinate (%f, %f) in polar co-ordinante is (%f, %f)\n", x, y, r, theta);
	return 0;
}
