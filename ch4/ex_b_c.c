/*****Chapter-4 [B] Output ****/
/*****Author: Deepshikha Date:05/10/2022****/
#include <stdio.h>

int main()
{
	int base, exp;
	int i = 0, num = 1;
	
	printf("Enter the Base: ");
	scanf("%d", &base);
	printf("Enter the Exponent: ");
	scanf("%d", &exp);
	
	while(i < exp)
	{
		num = num * base;
		i++;
	}
	
	printf("%d raised to the power of %d is %d\n", base, exp, num);
	return 0;
}
