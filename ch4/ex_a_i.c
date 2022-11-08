/*****Chapter-4 [A] Output ****/
/*****Author: Deepshikha Date:05/10/2022****/
#include <stdio.h>

int main()
{
	int x = 4, y = 0, z;
	while(x >= 0)
	{
		if(x == y)
			break;
		else
			printf("%d %d\n", x, y);
		x--;
		y++;
	}
	return 0;
}
