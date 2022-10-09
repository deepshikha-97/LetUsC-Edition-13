/*****Chapter-3 Exercise[G] Output ****/
/*****Author: Deepshikha Date:24/09/2022****/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float weight, height, bmi;
	
	printf("Enter weight(in kg) and height (in meter) to calculate BMI: ");
	scanf("%f %f", &weight, &height);
		
	bmi = weight/(pow(height,2));
	printf("BMI: %f\n", bmi);
	
	if(bmi < 15)
		printf("BMI Category: Starvation\n");
	else if(bmi >= 15.1 && bmi <= 17.5)
		printf("BMI Category: Anorexic\n");
	else if(bmi >= 17.6 && bmi <= 18.5)
		printf("BMI Category: Underweight\n");
	else if(bmi >= 18.6 && bmi <= 24.9)
		printf("BMI Category: Ideal\n");
	else if(bmi >= 25 && bmi <= 25.9)
		printf("BMI Category: Overweight\n");
	else if(bmi >= 30 && bmi <= 30.9)
		printf("BMI Category: Obese\n");
	else if(bmi >= 40)
		printf("BMI Category: Morbidly Obese\n");

	return 0;
}
