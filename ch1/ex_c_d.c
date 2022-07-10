/***Converting temperature from Fahrenheit to Centigrade degress***/ 
/***Date : 06/07/2022 Author: Deepshikha***/
/*** Formula centigrade = (Fohrenheit - 32)*(5/9) ***/

#include <stdio.h>

int main()
{
	float fahr, centi;
	
	printf("Enter the city temperature in Fahrenheigt: ");
	scanf("%f",&fahr);

	centi = ((fahr-32)*5.0)/9.0;
	
	printf("Temperature in Centigrade degree: %f\n",centi);

	return 0;
}
