/*****Evaluating Expression and showing the hierarchy****/
/*****Author: Deepshikha Date:16/07/2022****/
/*	Expected Compiler Error ---->
ex_e_b.c: In function ‘main’:
ex_e_b.c:9:8: error: lvalue required as decrement operand
  a = -3--25;
        ^
ex_e_b.c:9:10: error: expected ‘;’ before numeric constant
  a = -3--25;
          ^
ex_e_b.c:10:8: error: lvalue required as decrement operand
  b = -3--(-3);
*/


#include <stdio.h>

int main()
{
	int a, b;
	
	a = -3--25;
	b = -3--(-3);
	
	printf("a = %d b = %d\n",a,b);
	return 0;
}
