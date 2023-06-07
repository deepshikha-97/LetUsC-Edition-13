/*****Chapter-7 [A] Output ****/
/*****Author: Deepshikha Date:15/01/2022****/
#include <stdio.h>
void func();
int main()
{
	func();
	func();
	return 0;
}
void func()
{
	auto int i = 0;
	register int j = 0;
	static int k = 0;
	i++; j++;  k++;
	printf("%d %d %d\n", i, j, k);
}
