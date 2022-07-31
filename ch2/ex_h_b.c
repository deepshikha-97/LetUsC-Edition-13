/*****Attempt the following : H
Input five digit number 
Reverse the number
 ****/
/*****Author: Deepshikha Date:24/07/2022****/

#include <stdio.h>

int main()
{
	int num, rev_num;
	printf("Enter five digit number: ");
	scanf("%d",&num);
	rev_num = (num%10)*10000 + ((num%100)/10)*1000 + ((num%1000)/100)*100 + ((num%10000)/1000)*10 + (num/10000);

	printf("Reverse number is %d\n",rev_num);
	return 0;
}
