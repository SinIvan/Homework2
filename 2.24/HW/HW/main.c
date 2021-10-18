#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("This program is to determines an integer is odd or even\n");
	printf("Please enter an integer: ");

	scanf_s("%d", &num);

	if (num % 2 == 0)
	{
		printf("%d is even. ", num);
	}

	else

	{
		printf("%d is odd. ", num);
	}

	system("pause");
	return 0;
}