/*****Attempt the following : H
Receive value of latitude and longitude in degrees
Output the distance in nautical miles
 ****/

/*****Author: Deepshikha Date:24/07/2022****/


#include <stdio.h>
#include <math.h>

int main()
{
	float lat, longi, dist;
	printf("Enter latitude and longitude in degrees: ");
	scanf("%f %f",&lat, &longi);
	
	dist = 3963 * (acos(sin(lat*3.14/180)*sin(longi*3.14/180) + cos(lat*3.14/180)*cos(longi*3.14/180)*cos((longi*3.14/180)-(lat*3.14/180))));	
	printf("Distance in nauticals for given latitude and longitude is %f\n",dist);
	return 0;
}
