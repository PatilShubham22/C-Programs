///   Pattern Left Lower -Alphabet in column

#include <stdio.h>

int main()
{
	char ch ='\0';
	int i = 0, j = 0, X = 0;

	printf("\n Enter Row & Column Number = ");
	scanf("%d", &X);

	for (i = 1; i <= X; i++)
	{
		for (ch = 'A',j = 1; j <= X; j++, ch++)
		{
			if (i >= j)
			{
				printf(" %c ",ch);
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