/*****Chapter-4 [C] Output ****/
/*****Author: Deepshikha Date:08/10/2022****/
#include <stdio.h>

int main()
{
	int i = 1, j = 1;
	for(;;)
	{
		if(i > 5)
			break;
		else
			j += i;
		printf("%d\n",j);
		i += j;
		return 0;
	}
}
