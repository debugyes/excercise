#include<stdio.h>
int main(void)
{
	int x, y;
	printf("please enter the value of x:");
	scanf("%d", &x);

	if (x < 0)
	{
		y = 0;
	}
	else if (x > 0 && x <= 10)
	{
		y = x;
	}
	else if (x > 10 && x <= 20)
	{
		y = 10;
	}
	else if (x > 20 && x < 40)
	{
		y = -0.5 * x + 20;
	}

	printf("y=%d", y);

	return	0;
}