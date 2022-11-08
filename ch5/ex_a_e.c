/*****Chapter-5 [A] Output ****/
/*****Author: Deepshikha Date:08/11/2022****/
#include <stdio.h>

int main()
{
	int ch = 'a' + 'b';
	
	switch(ch)
	{
		case 'a':
		case 'b':
			printf("You entered b\n");
		case 'A':
			printf("a as in ashar\n");
		case 'b' + 'a':
			printf("You entered a and b\n");
	}
	return 0;
}
