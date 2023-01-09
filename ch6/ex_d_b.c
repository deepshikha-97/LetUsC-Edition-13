/*****Chapter-6 [D] Output ****/
/*****Author: Deepshikha Date:21/12/2022****/
#include <stdio.h>
int power(int a, int b);
int main()
{
	int a, b, result;
	printf("Enter two number a and b to calculate a raised to b: ");
	scanf("%d %d",&a, &b);
	result = power(a, b);
	printf("%d raised to %d is %d\n", a, b, result);
	return 0;
}

int power(int a, int b)
{
	int res = 1;
	int i = 0;
	
	for(i = 1; i <= b; i++)
	{
		res = res * a;
	}
	return res;
}
