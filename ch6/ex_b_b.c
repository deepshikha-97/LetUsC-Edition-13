/*****Chapter-6 [B] Output ****/
/*****Author: Deepshikha Date:12/12/2022****/
#include <stdio.h>
void message();
int main()
{
	int a;
	a = message();		//Error: Function does not return any value. Its return type is void.	
	return 0;
}

void message()
{
	printf("Viruses are written in C\n");
	return;
}
