/// Accept Array Elements From User & Then Display All Elements - Using Micro

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5
int main()
{
	
	int i = 0, Values[Size] = {0};
	
	for(i = 0; i < Size; i++)
	{
		printf("\n Enter Element No %d = ", i + 1 );
		scanf("%d",&Values[i]);
	}
	
	system("cls");
	
	printf("\n Elements in Array Are =>\n\n");
	
	for(i = 0; i < Size; i++)
	{
		printf("\n\n Value of %d Element = %d", i + 101, Values[i]);
	}

	
return 0;
}	
	