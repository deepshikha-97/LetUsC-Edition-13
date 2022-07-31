/*****Attempt the following : H
Input five digit number 
New number by adding one to each of fits digits
 ****/
/*****Author: Deepshikha Date:24/07/2022****/

#include <stdio.h>

int main()
{
	int num, new_num;
	printf("Enter five digit number: ");
	scanf("%d",&num);
	new_num = (((num/10000)+1)*10000) + ((((num%10000)/1000) + 1)*1000) + ((((num%1000)/100)+1)*100) +  ((((num%100)/10)+1)*10) + ((num%10)+1);

	printf("New number is %d\n",new_num);
	return 0;
}
