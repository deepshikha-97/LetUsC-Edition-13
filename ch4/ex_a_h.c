/*****Chapter-4 [A] Output ****/
/*****Author: Deepshikha Date:05/10/2022****/
#include <stdio.h>

int main()
{
	int x = 4, y = 0, z;
	while(x >= 0)
	{
		x--;
		y++;
		if(x == y)
			continue;
		else
			printf("\n%d %d", x, y);
	}
	return 0;
}
