#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height, m, weight, BMI;
	printf("BMI\n");
	printf("height(cm): ");
	scanf_s("%f", &height);
	printf("weight(kg): ");
	scanf_s("%f", &weight);

	m = height / 100;
	BMI = weight / (m*m);
	printf("BMI = %.1f\n\n", BMI);

	if (BMI < 18.5)
		printf("Undermeight\n\n");

	if (BMI >= 18.5 && BMI < 24.9)
		printf("Normal\n\n");

	if (BMI >= 25 && BMI < 29.9)
		printf("Overweight\n\n");

	if (BMI >= 30)
		printf("Obese\n\n");

	system("pause");
	return 0;
}