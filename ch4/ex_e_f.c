/*****Chapter-4 [E] Output ****/
/*****Author: Deepshikha Date:08/10/2022****/
#include <stdio.h>

int main()
{
	int num, i = 1;
	
	printf("Enter a number to get printed multiplication table: ");
	scanf("%d",&num);
	
	printf("Multiplication Table:\n");
	
	while(i <= 10)
	{
		printf("%d*%d = %d\n", num, i, num*i);
		i++;
	}
	return 0;
}
