/// Program To Find Out Minimum Amount From 10 Inputted Bills
/// Without Array, Only use 3 Variables, Handle If All Inputs Are -ve

#include<stdio.h>

int main()
{
	int i = 0, Amount = 0, Min_Bill = 0;
	
	for(i = 1; i <= 10; i++)
	{
		printf("\n Enter Bill Amount %d = ",i);
		scanf("%d",&Amount);
		
		if((i == 1) || (Amount < Min_Bill))
		{
			printf("Min Updated");
			Min_Bill = Amount;
		}	
	}
	printf("\n Minimum Bill Amount Is = %d",Min_Bill);
	
	return 0;
}	
	
	
			