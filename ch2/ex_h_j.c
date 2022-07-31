/*****Attempt the following : H
Receive values of temperature and wind velocity
Calculate wind chill factor
 ****/

/*****Author: Deepshikha Date:24/07/2022****/


#include <stdio.h>
#include <math.h>

int main()
{
	float t, v, wcf;
	printf("Enter Tempature and wind velocity: ");
	scanf("%f %f",&t, &v);
	
	wcf = 35.74 + 0.6215*t + ((0.4275*t - 35.75)*pow(v,0.16));	
	printf("Wind chill factor %f\n", wcf);
	return 0;
}
