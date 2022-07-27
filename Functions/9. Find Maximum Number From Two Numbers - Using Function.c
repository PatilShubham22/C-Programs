/// Find Maximum Number From Two Numbers - Using Function

#include <stdio.h>

void Greater_Number(int, int);

int main()
{
	int No1 = 0, No2 = 0;

	printf("\n Find Maximum Number From Two Numbers");

	printf("\n\n Enter 1st Number = ");
	scanf("%d", &No1);

	printf("\n Enter 2nd Number = ");
	scanf("%d", &No2);

	Greater_Number(No1, No2);

	return 0;
}

void Greater_Number(int No1, int No2)
{
	if (No1 > No2)
	{
		printf("\n\n Number %d is Greater Than Number %d", No1, No2);
	}
	else if (No1 == No2)
	{
		printf("\n\n Number %d & Number%d Are Same Numbers", No2, No1);
	}
	else
	{
		printf("\n\n Number %d is Greater Than Number %d", No2, No1);
	}

	return;
}