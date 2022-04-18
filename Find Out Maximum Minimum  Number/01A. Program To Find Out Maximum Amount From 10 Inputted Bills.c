/// Program To Find Out Maximum Amount From 10 Inputted Bills
/// Without Array, Only use 3 Variables, Handle If All Inputs Are +ve

#include<stdio.h>

int main()
{
	int i = 0, Amount = 0, Max_Bill = 0;
	
	for(i = 1; i <= 10; i++)
	{
		printf("\n Enter Amount %d = ",i);
		scanf("%d",&Amount);
		
		if(Amount > Max_Bill)
		{
			printf("Max Updated");
			Max_Bill = Amount;
		}	
	}
	printf("\n Maximum Bill Amount Is = %d",Max_Bill);
	
	return 0;
}	
	
	
			