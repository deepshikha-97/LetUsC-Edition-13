/*****Chapter-3 Exercise[G] Output ****/
/*****Author: Deepshikha Date:15/09/2022****/
#include <stdio.h>

int main()
{
	int hardness, tensile_str;
	float car_cont;
	printf("Please enter the Hardness, Carbon content, Tensile Strength of steel\n");
	scanf("%d %f %d", &hardness, &car_cont, &tensile_str);
	
	if(hardness > 50 && car_cont < 0.7 && tensile_str > 5600)
		printf("Steel is graded as Grade 10");
	else if(hardness > 50 && car_cont < 0.7 && tensile_str <= 5600)
		printf("Steel is graded as Grade 9");
	else if(hardness <= 50 && car_cont < 0.7 && tensile_str > 5600)
		printf("Steel is graded as Grade 8");
	else if(hardness > 50 && car_cont >= 0.7 && tensile_str > 5600)
		printf("Steel is graded as Grade 7");
	else if((hardness > 50 && car_cont >= 0.7 && tensile_str <= 5600) || (hardness <= 50 && car_cont < 0.7 && tensile_str <= 5600)||(hardness <= 50 && car_cont >= 0.7 && tensile_str > 5600))
		printf("Steel is graded as Grade 6");
	else if(hardness < 50 && car_cont > 0.7 && tensile_str < 5600)
		printf("Steel is graded as Grade 5");
	return 0;
}
