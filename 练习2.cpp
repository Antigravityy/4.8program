#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[40];
	int width;
	printf("What's your name?\n");
	scanf("%s",name);
	printf("Hello! \"%s\".\n", name);

	width = strlen(name);

	printf("Hello! \"%20s\".\n", name);
	printf("Hello! \"%-20s\".\n", name);
	printf("Hello! \"%*s\".", (width + 3), name);
	return 0;
}