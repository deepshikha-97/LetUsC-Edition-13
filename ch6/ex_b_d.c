/*****Chapter-6 [B] Output ****/
/*****Author: Deepshikha Date:12/12/2022****/
#include <stdio.h>
void message();
int main()
{
	message();	
	message();	
	return 0;
}
	
void message();		//Error: Semicolon is not required after function definition
{
	printf("Praise worthy and C worthy are synonyms\n");
}
