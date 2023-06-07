/*****Chapter-7 [B] Output ****/
/*****Author: Deepshikha Date:15/01/2022****/
#include <stdio.h>
static int y;
int main()
{
	static int z;
	printf("%d %d\n", y, z);
	return 0;
}

