#include<stdlib.h>
#include<stdio.h>
#include<math.h>
 

enum Status { CONTINUE, WON, LOST };
int rollDice(void);

int main(void)
{
	int sum;
	int myPoint;

	enum Status gameStatus;
	srand(time(NULL));
	sum = rollDice();

	switch (sum)
	{
	case 7:
	case 11:
		gameStatus = WON;
		break;

	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;

	default:
		gameStatus = CONTINUE;
		myPoint = sum; 
		printf("Point is %d\n", myPoint);
		break;
	}

	while (gameStatus == CONTINUE)
	{
		sum = rollDice();

		if (sum == myPoint)
		{
			gameStatus = WON;
		}
		else 
		{
			if (sum==7)
			{
				gameStatus = LOST;
			}
		}
	}

	if (gameStatus == WON)
	{
		puts("Player wins\n");
	}
	else
	{
		puts("Player loses\n");
	}
	system("pause");
	return 0;
}

int rollDice(void)
{
	int workSum;

	int die1 = 1 + (rand() % 6);
	int die2 = 1 + (rand() % 6);
	workSum = die1 + die2;

	printf("Player rolled %d+%d=%d\n", die1, die2, workSum);
	return workSum;
}