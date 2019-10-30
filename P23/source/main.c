#include <stdlib.h>
#include <stdio.h>
#include <time.h>

enum Status{con, won , lose};

int rolldice(void);

int main(void)
{
	int sum;
	int mypoint;
	enum Status gamestatus;

	srand(time(NULL));
	sum = rolldice();

	switch (sum)
	{
	case 7:
	case 11:
		gamestatus = won;
		break;
	case 2:
	case 3:
	case 12:
		gamestatus = lose;
		break;
	default:
		gamestatus = con;
		mypoint = sum;
		printf("mypoint is %d\n", mypoint);
		break;
	}
	while (gamestatus == con)
	{
		sum = rolldice();
		if (sum == mypoint)
			gamestatus = won;
		else if (sum == 7)
			gamestatus = lose;
	}
	if (gamestatus == won)
		printf("Player win");
	else 
	{
		printf("Player lose");
	}
	system("pause");
	return 0;
}
rolldice(void) 
{
	int numsum;
	int num1;
	int num2;
	num1 = 1 + (rand() % 6);
	num2 = 1 + (rand() % 6);
	numsum = num1 + num2;
	printf("payer roll is %d + %d = %d\n", num1, num2, numsum);
	return numsum;
}
	

	
