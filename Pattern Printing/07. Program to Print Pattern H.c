/// Program to Print Pattern H

#include <stdio.h>

int main()
{
	int i = 0, j = 0, X = 0;

	printf("\n Enter Row & Column Number = ");
	scanf("%d", &X);

	for (i = 1; i <= X; i++)
	{
		for (j = 1; j <= X; j++)
		{
			if (j == 1 || j == X || i == (X / 2) + 1)
			{
				printf(" * ");
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