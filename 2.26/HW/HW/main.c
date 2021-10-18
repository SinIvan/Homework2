#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;

	while (1)
	{
		printf("Input two integers: ");
		scanf_s("%d%d", &num1, &num2);
		if (num1%num2 == 0) {
			printf("%d is a multiple of %d by a factor of %d\n", num1, num2, num1 / num2);
		}
		if (num1%num2 != 0) {
			printf("%d is not a multiple of %d by a factor of %d\n", num1, num2, num1 / num2);
		}
	}

	system("pause");
	return 0;
}