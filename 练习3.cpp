#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	float num;
	scanf("%f", &num);
	printf("The input is %.1f or %.2e", num, num);
	
	return 0;
}