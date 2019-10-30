#include <stdio.h>
#include <stdlib.h>

long fortical(long number);

int main(void)
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf("%d¡I=%d\n", i, fortical(i));
	}
	system("pause");
	return 0;
}
fortical(long number)
{
	if (number == 1)
		return 1;
	else
		return(number * fortical(number-1));
}