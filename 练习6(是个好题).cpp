#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char name[40];
	char surname[40];
	int wname, wsurname;
	printf("Please input your name and your surname\n");
	scanf("%s", name);
	scanf("%s", surname);
	wname = printf("%s", name);
	printf(" ");
	wsurname = printf("%s", surname);
	printf("\n%*d %*d\n", wname,wname,wsurname,wsurname);
	wname = printf("%s", name);
	printf(" ");
	wsurname = printf("%s", surname);
	printf("\n%-*d %-*d", wname, wname, wsurname, wsurname);
	return 0;
}