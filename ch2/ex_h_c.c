/*****Attempt the following : H
Input four digit number 
sum of first and last digit number
 ****/
/*****Author: Deepshikha Date:24/07/2022****/

#include <stdio.h>

int main()
{
	int num, sum;
	printf("Enter four digit number: ");
	scanf("%d",&num);
	sum = (num/1000) + (num%10); 

	printf("Sum of first and last digits is %d\n",sum);
	return 0;
}
