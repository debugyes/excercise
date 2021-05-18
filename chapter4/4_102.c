#include<stdio.h>
int main(void)
{
	int a;
	printf("please input a:");
	scanf("%d", &a);

	if (a % 5 == 0 && a % 7 == 0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return	0;
}