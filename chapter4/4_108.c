#include<stdio.h>
int main(void)
{
	int a, b;
	char symbol;
	printf("please enter:");
	scanf("%d%c%di", &a, &symbol, &b);
	
	if (symbol == '-')
	{
		symbol = '+';
	}
	else
	{
		symbol = '-';
	}

	printf("new value is %d%c%di", a, symbol, b);
	return	0;
}