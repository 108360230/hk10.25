#include <stdio.h>
#include <stdlib.h>

int maxuimum(int x, int y, int z);

void main(void)
{
	int n1, n2, n3;
	printf("�п�J�T�Ӿ��");
	scanf_s("%d%d%d", &n1, &n2, &n3);
	printf("�̤j���Ƭ�:%d", maxuimum(n1, n2, n3));
	system("pause");
}

maxuimum(int x, int y, int z)
{
	int max = x;
	if (y > max)
		max = y;
	if (z > max)
		max = z;
	return max;
}

