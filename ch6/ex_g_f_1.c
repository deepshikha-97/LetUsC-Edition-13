/*****Chapter-6 [G] Output ****/
/*****Author: Deepshikha Date:07/01/2023****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void dec_to_bin(int num);
int main()
{
	int n;
	printf("Enter the numbers you want to convert to binary: ");
	scanf("%d", &n);
	dec_to_bin(n);
	return 0;
}

void dec_to_bin(int num)
{
	int s = 0;
	int i = 0;
	while(num > 0)
	{
		if(num%2 != 0)
			s = s + (num%2)*pow(10, i);
		num = num / 2;
		i++;
	}
	printf("Decimal to Binary equivalent: %d\n", s);
		
}
