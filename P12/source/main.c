#include <stdio.h>
#include <stdlib.h>

int square(int y);

void main(void)
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", square(i));
	}
	printf("\n");
	system("pause");
	return 0;
}
square(int y)
{
	return y*y;
}