/*****Chapter-3 Exercise[G] Output ****/
/*****Author: Deepshikha Date:15/09/2022****/
#include <stdio.h>

int main()
{
	char c;
	
	printf("Enter any character: ");
	scanf("%c",&c);
	
	if(c >=65 &&  c<=90)
		printf("The entered character is a capital letter\n");	
	else if(c >=97 &&  c<=122)
		printf("The entered character is a small letter\n");	
	else if(c >=48 &&  c<=57)
		printf("The entered character is a digit\n");
	else if((c>=0 && c <=47) || (c>=58 && c <=64) || (c >=91 && c <=96) || (c >= 123 && c <= 127))
		printf("Special characters\n");	
	else
		printf("Invalid character\n");
	return 0;
}
