/***Interchanging the content of  C and D***/
/***Date : 07/07/2022 Author: Deepshikha***/

#include <stdio.h>

int main()
{
	int c, d, e;
	
	printf("Enter the two values C and D: ");
	scanf("%d %d",&c, &d);
	
	e = c;
	c = d;
	d = e;
	
	printf("Content of C and D after exchanging the values are C=%d\t D=%d\n",c,d);

	return 0;
}
