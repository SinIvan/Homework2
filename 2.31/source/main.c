#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;

	printf("number\tsquare\tcube\n");

	for (a = 0; a <= 10; a++)
		printf("%d\t%d\t%d\n", a, a*a, a*a*a);

	system("pause");
	return 0;
}