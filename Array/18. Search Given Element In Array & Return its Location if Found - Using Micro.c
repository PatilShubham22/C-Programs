/// Search Given Element In Array & Return its Location if Found - Using Micro

#include<stdio.h>
#include<stdlib.h>

#define Size 5

int main()
{
	int i = 0, Ele = 0, Bill[Size] = {0};
	
	for(i = 0; i < Size; i++)
	{
		printf("\n Enter Bill No %d = ", (i+1));    /// Entered Bill Amounts
		scanf("%d",&Bill[i]);
	}
	
	printf("\n Enter Element To Search in Array = ");   /// Element To Search
	scanf("%d",&Ele);
	
	for(i = 0; i < Size; i++)
	{
		if(Bill[i] == Ele)
		{
			break;
		}
	}
	
	if(i == Size)
	{
		printf("\n No Such Element Found In Array");
	}
	else
	{
		printf("\n Element %d Found At Location %d ", Ele, (i+1));
	}
	
return 0;
}									