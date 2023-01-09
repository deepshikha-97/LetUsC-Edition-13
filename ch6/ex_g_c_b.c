/*****Chapter-6 [G] Output ****/
/*****Author: Deepshikha Date:26/12/2022****/
#include <stdio.h>
#include <math.h>
int sum_digit(int num, int i);
int main()
{
	int n, sum_of_digit, i = 5;
	printf("Enter five digit number: ");
	scanf("%d",&n);
	sum_of_digit = sum_digit(n, i);
	printf("Sum of digit: %d\n", sum_of_digit);
	return 0;
}

int sum_digit(int num, int i)
{
	int sum_dig = 0;
	i = i - 1;	
	if(num > 10)
	{
		sum_dig = sum_dig + (num / ((int)pow(10, i))) + sum_digit(num% ((int) pow(10, i)), i); 
		
	}
	else
	{
		return num;
	}
		
	return sum_dig;
		
}
