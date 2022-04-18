/// Program To Find Factorial Of Given number

#include<stdio.h>

int main()
{
	int Num = 0, Temp = 0, Fact = 0;
	
	Start :
	
	printf("Enter Factorial Number = ");
	scanf("%d",&Num);
	
	if(Num < 1)
	{
		printf("\n Entered Number Is Not Valid");
		printf("\n Please Enter A Valid Number");
		goto Start;
	}	
		
		for(Fact = 1, Temp = Num; Temp > 0; Temp-- )
		{
			Fact = Fact * Temp;
		}	
	
	printf("\n\n*******************************");
	printf("\nFactorial Of Given Number Is = %d",Fact);
	printf("\n\n*******************************");
	
	
	
return 0;
}	
			