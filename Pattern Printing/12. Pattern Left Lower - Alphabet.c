///   Pattern Left Lower -Alphabet 

#include <stdio.h>

int main()
{
	char ch ='\0';
	int i = 0, j = 0, X = 0;

	printf("\n Enter Row & Column Number = ");
	scanf("%d", &X);

	for (ch = 'A', i = 1; i <= X; i++)
	{
		for (j = 1; j <= X; j++)
		{
			if (i >= j)
			{
				printf(" %c ",ch);
			}
			else
			{
				printf("   ");
			}
			ch++;
		}
		printf("\n");
	}
	return 0;
}