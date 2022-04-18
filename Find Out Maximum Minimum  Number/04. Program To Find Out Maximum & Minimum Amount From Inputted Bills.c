/// Program To Find Out Maximum & Minimum Amount From Inputted Bills
/// Without Array, Only use 3 Variables, Handle If All Inputs Are -ve

#include<stdio.h>

int main()
{
	int i = 0, Amount = 0, Neg = 0, Min_Bill = 0, Max_Bill = 0;
	
	for(i = 1; i <= 10; i++)
	{
		printf("\n Enter %dst Bill Amount = ",i);
		scanf("%d",&Amount);
		
		    if((i == 1) || (Amount < Min_Bill))
	        {
	        	printf("Minimum Updated");
	            Min_Bill = Amount;
	        }										
	
	         if ((i == 0) || (Amount > Max_Bill))
	        {
	        	printf("\nMaximum Updated");
	        	Max_Bill = Amount;
	        }
	        	
	}
	printf("\n\n*******************************");
	printf("\nMinimum Bill Amount Is = %d",Min_Bill);
	printf("\n\n*******************************");
	
	printf("\n\n*******************************");
	printf("\nMaximum Bill Amount Is = %d",Max_Bill);
	printf("\n\n*******************************");
	
	
return 0;
}	
			