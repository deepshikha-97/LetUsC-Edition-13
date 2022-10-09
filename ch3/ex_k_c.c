/*****Chapter-3 Exercise[C] Output ****/
/*****Author: Deepshikha Date:02/10/2022****/
#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("Enter the three digit: ");
	scanf("%d %d %d",&a, &b, &c);
	
	((a>b)&&(a>c))?printf("Greatest Number %d\n",a):(((b>a)&&(b>c))?printf("Greatest Number %d\n",b):printf("Greatest Number %d\n",c));
	
	return 0;
}
