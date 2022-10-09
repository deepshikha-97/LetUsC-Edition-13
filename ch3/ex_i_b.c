/*****Chapter-3 Exercise[I] Output ****/
/*****Author: Deepshikha Date:25/09/2022****/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Error: In the line number:11, As in the printf %c is also there so variable of char should be passed in printf fo thr %c
int main()
{
	int j = 65;
	printf("j >= 65 ? %d : %c\n",j);
	return 0;
}
