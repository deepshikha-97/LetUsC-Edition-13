/*****Chapter-4 [B] Output ****/
/*****Author: Deepshikha Date:05/10/2022****/
#include <stdio.h>

int main()
{
	char c = 0;
	int i = 0;
	
	while(i <= 255)
	{
		printf("%d:Character: %c\n", i, c);
		c++;
		i++;
	}
	return 0;
}
