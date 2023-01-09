/*****Chapter-6 [G] Output ****/
/*****Author: Deepshikha Date:07/01/2023****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int factorial(int n);
float series_value(float n); 
int main()
{
	float n;
	float value;
	printf("Enter the value of x(in deg) to calculate the sin(x): ");
	scanf("%f", &n);
	n = n * 3.14/180;
	value = series_value(n);
	printf("The value of sin(%f) is %0.5f\n", n, value);
	return 0;
}

float series_value(float n) 
{
	float v = 0;
	int i = 1,  j = 0;
	
	while(i < 30)
	{
		v = v + ((pow(-1, j) * pow(n, i)*1.0)/factorial(i));
		i = i + 2;
		j++;
	}
	printf("%f\n", v);	
	return v;
}




int factorial(int n)
{
	int f = 1, i = 1;
	for(i = 1; i <= n; i++)
	{
		f = f * i;
	}
	return f;
}
