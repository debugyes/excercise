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
		printf("��ͬʱ��3��5��7����");
	}
	else if (a1 == 0 && a2 == 0)
	{
		printf("��ͬʱ��3��5����");
	}
	else if (a1 == 0 && a3 == 0)
	{
		printf("��ͬʱ��3��7����");
	}
	else if (a2 == 0 && a3 == 0)
	{
		printf("��ͬʱ��5��7����");
	}
	else if (a1 == 0)
	{
		printf("�ܱ�3����");
	}
	else if (a2 == 0)
	{
		printf("�ܱ�5����");
	}
	else if (a3 == 0)
	{
		printf("�ܱ�7����");
	}
	return	0;
}