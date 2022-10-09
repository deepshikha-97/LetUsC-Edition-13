/*****Chapter-3 Exercise[G] Output ****/
/*****Author: Deepshikha Date:15/09/2022****/
#include <stdio.h>

int main()
{
	char c;
	
	printf("Enter any character: ");
	scanf("%c",&c);
	
	((c>=0 && c <=47) || (c>=58 && c <=64) || (c >=91 && c <=96) || (c >= 123 && c <= 127))?printf("Special characters\n"):printf("Other character\n");
	return 0;
}
