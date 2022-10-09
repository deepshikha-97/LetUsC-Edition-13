/*****Chapter-3 Exercise[I] Output ****/
/*****Author: Deepshikha Date:25/09/2022****/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Error in line 12: Semicolon not required at the end of printf for this conditional operator 
int main()
{
	int n = 9;
	(n == 9 ? printf("Correct\n");:printf("Wrong\n"););
	return 0;
}
