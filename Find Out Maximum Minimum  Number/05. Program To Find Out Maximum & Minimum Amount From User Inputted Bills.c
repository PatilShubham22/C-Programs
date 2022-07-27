/// Program To Accept 10 Numbers From User
/// Find How Many Negative Numbers 

#include<stdio.h>

int main()
{
	int i = 0, Cnt = 0, Amount = 0, Min_Bill = 0, Max_Bill = 0;
	
	printf("Enter How Many Biils Do You Have = ");
	scanf("%d",&Cnt);
	
	for(i = 1; i <= Cnt; i++)
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
			