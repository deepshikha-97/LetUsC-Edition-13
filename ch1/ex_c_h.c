/***Caclulating cost price of one Item***/
/***Date : 07/07/2022 Author: Deepshikha***/

#include <stdio.h>

int main()
{
	int length = 1189, breadth = 841;
	
	printf("Paper of size A0 has dimensions %dmm x %dmm\n",length, breadth);
	printf("Paper of size A1 has dimensions %fmm x %dmm\n",(length/2.0), breadth);
	printf("Paper of size A2 has dimensions %fmm x %fmm\n",(length/2.0), (breadth/2.0));
	printf("Paper of size A3 has dimensions %fmm x %fmm\n",(length/4.0), (breadth/2.0));
	printf("Paper of size A4 has dimensions %fmm x %fmm\n",(length/4.0), (breadth/4.0));
	printf("Paper of size A5 has dimensions %fmm x %fmm\n",(length/8.0), (breadth/4.0));
	printf("Paper of size A6 has dimensions %fmm x %fmm\n",(length/8.0), (breadth/8.0));
	printf("Paper of size A7 has dimensions %fmm x %fmm\n",(length/16.0), (breadth/8.0));
	printf("Paper of size A8 has dimensions %fmm x %fmm\n",(length/16.0), (breadth/16.0));
	return 0;
}
