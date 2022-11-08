/*****Chapter-4 [B] Output ****/
/*****Author: Deepshikha Date:09/10/2022****/
#include <stdio.h>
#include <math.h>

int main()
{
	int num, octal=0, i = 0, r = 0;
	
	printf("Enter a number to find octal equivalent: ");
	scanf("%d",&num);
	
	while(num)
	{
		r = (num%8);
		num = (num/8);
		octal = octal + r*pow(10,i);
		i++;
	}
	
	printf("Octal Equivalent: %d\n", octal);
	return 0;
}
