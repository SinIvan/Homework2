#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int miles;
	int gascost;
	int mpg;
	int parkfee;
	int tolls;
	int total;

	printf("Please enter the total miles driven per day: ");
	scanf_s("%d", &miles);

	printf("Please enter the cost per gallon of gasoline: ");
	scanf_s("%d", &gascost);

	printf("Please enter average miles per gallon: ");
	scanf_s("%d", &mpg);

	printf("Please enter the parking fees per day: ");
	scanf_s("%d", &parkfee);

	printf("Please enter the tolls per day: ");
	scanf_s("%d", &tolls);

	total = tolls + parkfee + (miles / mpg)*gascost;

	printf("Total cost per day is $%d\n", total);

	system("pause");
	return 0;
}