#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char name[50];
	char surname[50];
	printf("What's your surname?\n");
	scanf("%s", surname);
	printf("Your surname is %s.\n", surname);
	printf("And what's your fullname?\n");
	scanf("%s", name);
	printf("OK,your fullname is %s.\n", name);
	printf("Hello! %s %s\n", surname, name);

	return 0;

}