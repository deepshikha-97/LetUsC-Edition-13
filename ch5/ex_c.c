/*****Chapter-5 [C] Output ****/
/*****Author: Deepshikha Date:08/11/2022****/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char response = 'Y';
	int num, i, fact=1, option_num;
	
	while(response == 'y' || response == 'Y')
	{
		printf("Choose one of the following options:\n");
		printf("1. Factorial of a number\n");
		printf("2. Prime or not\n");
		printf("3. Odd or even\n");
		printf("4. Exit\n");
	
		scanf("%d", &option_num);
		if(option_num < 1 || option_num > 4)
		{
			printf("Enterer option is out of menu. Please enter an option from the above menu\n");
			printf("Exiting the Program. Rerun Again.\n");
			exit(1);
		}
		switch(option_num)
		{
			case 1:
				printf("Enter number to compute Factorial:");
				scanf("%d", &num);
				fact = 1;
				for(i = 1; i <= num; i++)
					fact = fact * i;
				printf("Factorial of %d is  %d\n", num, fact);
				break;
			case 2:
				printf("Enter number to check if  it is prime or not : ");
				scanf("%d",&num);
				for(i = 2; i < num; i++)
				{
					if((num%i) == 0)
						break;
				}
				if(i == num)
					printf("%d is Prime number\n", num);
				else
					printf("%d is not Prime number\n", num);
				break;
			case 3:
				printf("Enter number to check if  it is odd or even : ");
				scanf("%d", &num);
				if((num % 2) != 0)
					printf("%d is Odd number\n", num);
				else
					printf("%d is even number\n", num);
				break;
			case 4:
				exit(1);
		}
		printf("\nDo You want to do other computation:");
		scanf(" %c", &response);
	}
	
	return 0;
}
