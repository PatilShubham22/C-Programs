/// Program To Calculate Sum Of Digits In 3 Given Numbers

#include <stdio.h>

int main ()
{
	int Num = 0, Dig = 0, dCnt = 0, Temp = 0, dSum = 0;
	
	Up :
	printf("\nEnter a 3 Digit Positive Number =  ");
	scanf("%d",&Num);
	
	if(Num < 0)
	{
		printf("\n Please Enter a +ve Number\n ");
		goto Up;
	}
	
	Temp = Num;
	dCnt = 0;
	
	while (Temp > 0)
	{
		Temp = Temp / 10;
		dCnt++;
	}
	
	if(dCnt == 3)
	{
		Temp = Num;
		
		while(Temp > 0)
		{
			Dig = Temp % 10;
			dSum = dSum + Dig;
			Temp = Temp / 10;
		}	
	}	
	
	else
	{
		printf("\n Its Not 3 Digit Number");
		goto Up;
	}	
	
	printf("\n\n Sum Of Digits Of %d is = %d", Num, dSum);
return 0;
}		 			 			 			 		
		