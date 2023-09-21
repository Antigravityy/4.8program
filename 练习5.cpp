#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	float speed, size, time;
	printf("Please input the net speed(Mb/s) and file size(MB)\n");
	scanf("%f %f", &speed, &size);
	printf("At %.2f megabyts per second, a file of %.2f megabytes\n"
		, speed, size);
	time = size * 8 / speed;
	printf("download in %.2f seconds.\n", time);

	return 0;
}