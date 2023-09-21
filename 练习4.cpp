#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char name[40];
	float high;
	printf("Hello! I'm eason. What's your name?\n");
	scanf("%s", name);
	printf("Ok,%s. You look so tall! What's your stature?\n", name);
	scanf("%f", &high);
	printf("Oh! You are %.2f feet tall!\n",high);
	return 0;
}