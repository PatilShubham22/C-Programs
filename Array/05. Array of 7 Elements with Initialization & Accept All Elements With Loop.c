/// Array of 7 Elements with Initialization & Accept All Elements With Loop Display All Elements

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	
	int i = 0, Values[7] = {0};
	
	for(i = 0; i < 7; i++)
	{
		printf("\n Enter Element No %d = ", i + 1 );
		scanf("%d",&Values[i]);
	}
	
	clrscr();
	
	printf("\n Elements in Array Are =>\n\n");
	
	for(i = 0; i < 7; i++)
	{
		printf("\n\n Value of %d Element = %d", i + 101, Values[i]);
	}

	
return 0;
}	
	