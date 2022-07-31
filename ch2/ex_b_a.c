/*****Evaluating Expression and showing the hierarchy****/
/*****Author: Deepshikha Date:16/07/2022****/
#include <stdio.h>

int main()
{
	int a = 3, b = 2, x = 5, y = 4;
	int ans;
	
	ans = 5 * b * b * x - 3 * a * y * y - 8 * b * b * x + 10 * a * y;
	
	printf("%d\n",ans);
	return 0;
}
