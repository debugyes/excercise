#include<stdio.h>
int main(void)
{
	int a;
	int a1, a2, a3;
	printf("please enter the value of a:");
	scanf("%d", &a);

	a1 = a % 3;
	a2 = a % 5;
	a3 = a % 7;

	if (a1 == 0 && a2 == 0 && a3 == 0)
	{
		printf("能同时被3、5、7整除");
	}
	else if (a1 == 0 && a2 == 0)
	{
		printf("能同时被3、5整除");
	}
	else if (a1 == 0 && a3 == 0)
	{
		printf("能同时被3、7整除");
	}
	else if (a2 == 0 && a3 == 0)
	{
		printf("能同时被5、7整除");
	}
	else if (a1 == 0)
	{
		printf("能被3整除");
	}
	else if (a2 == 0)
	{
		printf("能被5整除");
	}
	else if (a3 == 0)
	{
		printf("能被7整除");
	}
	return	0;
}