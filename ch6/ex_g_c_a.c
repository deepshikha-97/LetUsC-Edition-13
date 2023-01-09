/*****Chapter-6 [G] Output ****/
/*****Author: Deepshikha Date:26/12/2022****/
#include <stdio.h>
#include <math.h>
int sum_digit(int num);
int main()
{
	int n, sum_of_digit;
	printf("Enter five digit number: ");
	scanf("%d",&n);
	sum_of_digit = sum_digit(n);
	printf("Sum of digit: %d\n", sum_of_digit);
	return 0;
}

int sum_digit(int num)
{
	int i = 0, sum_digit = 0;
	for(i = 4; i > 0; i--)
	{
		sum_digit = sum_digit + (num/(int)pow(10,i));
		num = num%((int) pow(10,i));
	}
	sum_digit = sum_digit + num;
	return sum_digit;
		
}
