///   Pattern Left Lower - Number 7 Table

#include <stdio.h>

int main()
{
	
	int i = 0, j = 0, X = 0, Num = 0, Cnt = 1;

	printf("\n Enter Row & Column Number = ");
	scanf("%d", &X);

	for (Num = 7, i = 1; i <= X; i++)
	{
		for (j = 1; j <= X; j++)
		{
			if (i >= j)
			{
				printf(" %d ",Num * Cnt);
				Cnt++;
			}
			else
			{
				printf("   ");
			}
			
		}
		printf("\n");
	}
	return 0;
}