#include<stdio.h>
int main(void)
{
	float data1, data2;
	char op;
	printf("type in your expression:");
	scanf("%f %c %f", &data1, &op, &data2);


	switch (op)
	{
	case '+':
		printf("%f", data1 + data2);
		break;
	case '-':
		printf("%f", data1 - data2);
		break;
	case '*':
		printf("%f", data1 * data2);
		break;
	case '/':
		printf("%f", data1 / data2);
		break;
	}

	return	0;
}