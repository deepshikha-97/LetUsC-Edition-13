/*****Chapter-3 Exercise[I] Output ****/
/*****Author: Deepshikha Date:25/09/2022****/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Error in line 11: In the conditional operator first uniary operator should be question mark(?) not colon(:)
int main()
{
	int kk = 65, ll;
	ll = (kk == 65:printf("kk == 65\n"):printf("kk != 65\n"));
	printf("%d\n",ll);
	return 0;
}
