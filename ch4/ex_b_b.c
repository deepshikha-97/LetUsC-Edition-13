/*****Chapter-4 [B] Output ****/
/*****Author: Deepshikha Date:05/10/2022****/
#include <stdio.h>

int main()
{
	int num, fact =  1, i = 1;
	
	printf("Enter the number to calculate factorial: ");
	scanf("%d", &num);
	
	while(i <= num)
	{
		fact = fact*i;
		i++;
	}

	if(num == 0)
		printf("Factorial = %d\n", fact);	
	else
		printf("Factorial = %d\n", fact);	
	return 0;
}
