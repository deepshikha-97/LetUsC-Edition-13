/*****Chapter-6 [B] Output ****/
/*****Author: Deepshikha Date:12/12/2022****/
#include <stdio.h>
void message();
int main()
{
	int a;
	message(message()); 	//Error: A function can not be called inside a function
	return 0;
}

void message()
{
	printf("It's a small world after all...\n");
	return;
}
