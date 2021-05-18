#include<stdio.h>
int main(void)
{
	int a, b, r;
	printf("please enter the number of a and b:");
	scanf("%d%d", &a, &b);
	if ((r = (a * a) + (b * b)) > 100)
	{
		printf("%d", r / 100);
	}
	else
	{
		printf("%d", r);
	}

	return	0;
}
