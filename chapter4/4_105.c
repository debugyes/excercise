#include<stdio.h>
int main(void)
{
	int x, y;
	int flag;

	printf("please enter the value of x:");
	scanf("%d", &x);


	if (x < 0)
	{
		flag = 1;
	}
	else if (x == 0)
	{
		flag = 2;
	}
	else
	{
		flag = 3;
	}

	switch (flag)
	{
	case 1:
		y = -1;
		break;
	case 2:
		y = 0;
		break;
	case 3:
		y = 1;
		break;
	}

	printf("y=%d", y);


	return	0;
}