#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<float.h>
int main(void)
{
	float num1;
	double num2;
	num1 = 1.0 / 3.0;
	num2 = 1.0 / 3.0;
	printf("float of one third(6):%.6f\n", num1);
	printf("float of one third(12):%.12f\n", num1);
	printf("float of one third(16):%.16f\n", num1);
	printf("double of one third(6):%.6lf\n", num2);
	printf("double of one third(12):%.12Lf\n", num2);
	printf("double of one third(16):%.16Lf\n", num2);
	printf("FLT_DIG in float.h is %d\n", FLT_DIG);
	printf("DBL_DIG in float.h is %d\n", DBL_DIG);

	return 0;
}