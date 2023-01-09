/*****Chapter-6 [G] Output ****/
/*****Author: Deepshikha Date:07/01/2023****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int dec_to_bin(int num);
int main()
{
	int r;
	int n;
	printf("Enter the numbers you want to convert to binary: ");
	scanf("%d", &n);
	r = dec_to_bin(n);
	printf("\n");
	return 0;
}

int dec_to_bin(int num)
{
	int r;
	if(num > 0)
	{
		r = dec_to_bin(num/2);
		printf("%d", num%2);
	}
	else
	{
		return num;
		printf("\n");
	}
	
	return num%2;
		
}
