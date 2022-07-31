/*****Evaluating Expression and showing the hierarchy****/
/*****Author: Deepshikha Date:16/07/2022****/
#include <stdio.h>

int main()
{
	int a = 4, y = 1, c = 3;
	int res;
	
	res = 4 * a * y / c - a * y / c; 
	
	printf("%d\n",res);
	return 0;
}
