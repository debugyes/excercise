#include<stdio.h>
int main(void)
{
	float	score;
	char grade;
	printf("please enter score:");
	scanf("%f", &score);

	switch ((int)score/10)
	{
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'E';
		break;
	}

	printf("%c", grade);

	return	0;
}