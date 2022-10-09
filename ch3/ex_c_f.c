/*****Chapter-2 Exercise[C] Output ****/
/*****Author: Deepshikha Date:24/08/2022****/
#include <stdio.h>

int main()
{
	int ram_age, shyam_age, ajay_age; 
	
	printf("Enter the age of Ram: ");
	scanf("%d",&ram_age);
	printf("Enter the age of Shyam: ");
	scanf("%d",&shyam_age);
	printf("Enter the age of Ajay: ");
	scanf("%d",&ajay_age);
	
	if((ram_age < shyam_age) && (ram_age < ajay_age))
	{
		printf("Ram is youngest of the three\n");
	}
	else if((shyam_age < ram_age) && (shyam_age < ajay_age))
	{
		printf("Shyam is youngest of the three\n");
	}
	else
		printf("Ajay is youngest of the three\n");
	
	return 0;
}
