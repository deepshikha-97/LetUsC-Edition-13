/*****Chapter-3 Exercise[F] Output ****/
/*****Author: Deepshikha Date:28/08/2022****/
/**** Error: or is not an operator in C ****/
#include <stdio.h>

int main()
{
	char spy = 'a', password = 'z';
	
	if(spy ==  'a' or password == 'z')
		printf("All the bird are safe in the nest\n");
	
	return 0;
}
