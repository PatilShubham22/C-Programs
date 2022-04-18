/// Digit Sum in Given Number 

#include <stdio.h>

int main ()
{
	int Num = 0, Dig = 0, Temp = 0, dSum = 0;
	
	Up :
	printf("\nEnter a Positive Number =  ");
	scanf("%d",&Num);
	
	if(Num < 0)
	{
		printf("\n Please Enter a Positive Number\n ");
		goto Up;
	}
	
	Temp = Num;
	
	while (Temp > 0)
	{
		Dig = Temp % 10;
		dSum = dSum + Dig;
		Temp = Temp / 10;
	}
	
	printf("\n Digits Sum in %d Number is = %d", Num ,dSum);
	
return 0;
}		 			 			 			 		
		