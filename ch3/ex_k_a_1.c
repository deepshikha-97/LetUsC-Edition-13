/*****Chapter-3 Exercise[G] Output ****/
/*****Author: Deepshikha Date:01/10/2022****/
#include <stdio.h>

int main()
{
	char c;
	
	printf("Enter any character: ");
	scanf("%c",&c);

		
	(c >=65 &&  c<=90)?printf("The entered character is a capital letter\n"):((c >=97 &&  c<=122)?printf("The entered character is a small letter\n"):printf("Neither Capital nor small\n"));
	return 0;
}
