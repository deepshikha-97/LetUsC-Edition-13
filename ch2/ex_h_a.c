/*****Attempt the following : H
Input five digit number 
calculate the sum of digits
 ****/
/*****Author: Deepshikha Date:24/07/2022****/

#include <stdio.h>

int main()
{
	int num, sum;
	printf("Enter five digit number: ");
	scanf("%d",&num);
	sum =  (num/10000)+((num%10000)/1000)+((num%1000)/100)+((num%100)/10)+(num%10);

	printf("Sum of digits is  %d\n",sum);
	return 0;
}
