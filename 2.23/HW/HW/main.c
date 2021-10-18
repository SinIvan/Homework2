#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, num3, largest, smallest;

	printf("Enter three integers, and find the largest and smallest integers\n");
	printf("Please enter first integer: ");
	scanf_s("%d", &num1);
	printf("Please enter second integer: ");
	scanf_s("%d", &num2);
	printf("Please enter third integer: ");
	scanf_s("%d", &num3);

	largest = num1;

	if (largest < num2)
	{
		largest = num2;
	}

	if (largest < num3)
	{
		largest = num3;
	}

	smallest = num1;

	if (smallest > num2)
	{
		smallest = num2;
	}

	if (smallest > num3)
	{
		smallest = num3;
	}

	printf("in (%d,%d,%d), the largest integer is %d\n", num1, num2, num3, largest);
	printf("in (%d,%d,%d), the smallest integer is %d\n", num1, num2, num3, smallest);

	system("pause");
	return 0;
}