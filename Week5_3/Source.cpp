#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char x;
	scanf("%c", &x);
	if (x >= 48 && x <= 57)
	{
		printf("This is number");
	}
	else 
	{
		printf("This is not number");
	}
	return 0;
}