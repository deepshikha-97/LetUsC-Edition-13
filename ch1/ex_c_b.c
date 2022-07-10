/*** Converting KM in m, feet, inches, and cm***/
/***Date : 05/07/2022 Author: Deepshikha***/

#include <stdio.h>

int main()
{
	float dis = 0, dis_meter = 0, dis_feet = 0, dis_inches = 0, dis_cm = 0;
	
	printf("Enter the distance between two cities: ");
	scanf("%f", &dis);
	
	dis_meter = 1000*dis;
	printf("Distance in Meter : %f m\n",dis_meter);

	dis_feet = (1000*dis*12.0)/0.0252; //1inch = 0.0252m 1feet = 12 inch
	printf("Distance in Feet : %f feet\n",dis_feet);

	dis_inches = (1000*dis)/0.0252;
	printf("Distance in inches : %f inches\n",dis_inches);

	dis_cm = 100000*dis;
	printf("Distance in cm : %f cm\n",dis_cm);

	return 0;
}
