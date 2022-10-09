/*****Chapter-2 Exercise[C] Output ****/
/*****Author: Deepshikha Date:24/07/2022****/

#include <stdio.h>

int main()
{
	int num, rev_num;
	printf("Enter five digit number: ");
	scanf("%d",&num);
	rev_num = (num%10)*10000 + ((num%100)/10)*1000 + ((num%1000)/100)*100 + ((num%10000)/1000)*10 + (num/10000);

	printf("Reverse number is %d\n",rev_num);
	
	if(rev_num == num)
		printf("Reverse and original number are same\n");
	else
		printf("Reverse and original number are not same\n");
	return 0;
}
