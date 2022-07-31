/*****Evaluating Expression and showing the hierarchy****/
/*****Author: Deepshikha Date:24/07/2022****/
/* 	Compiler Error ---->
ex_e_c.c: In function ‘main’:
ex_e_c.c:10:7: error: invalid operands to binary % (have ‘float’ and ‘float’)
  c = a%b;
       ^
*/

#include <stdio.h>

int main()
{
	float a = 5, b = 2;
	int c,d;
	
	c = a%b;
	d = a/2;
	
	printf("%d\n",d);	
	return 0;
}
