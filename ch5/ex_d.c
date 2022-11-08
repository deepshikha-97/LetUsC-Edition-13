/*****Chapter-5 [C] Output ****/
/*****Author: Deepshikha Date:08/11/2022****/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int obt_class, num_sub;
	
	printf("Enter the class obtained: ");
	scanf("%d", &obt_class);
	
	if(obt_class < 1 || obt_class > 3)
	{
		printf("Enter Class is invalid\n");
		exit(1);
	}
	
	printf("Enter number of subject you have failed: ");
	scanf("%d", &num_sub);
	
	switch(obt_class)
	{
		case 1:
			if(num_sub > 3)
				printf("You will not get any Grace\n");
			else
				printf("Grace is of 5 marks per subject.\n");
			break;
		case 2:
			if(num_sub > 2)
				printf("You will not get any Grace\n");
			else
				printf("Grace is of 4 marks per subject.\n");
			break;
		case 3:
			if(num_sub > 1)
				printf("You will not get any Grace\n");
			else
				printf("Grace is of 4 marks per subject.\n");
			break;
	}

	return 0;
}
