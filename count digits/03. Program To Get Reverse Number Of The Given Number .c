/// Program To Get Reverse Number Of The Given Number 

#include <stdio.h>

int main ()
{
	int Num = 0, Dig = 0, Temp = 0, Rev = 0;
	
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
		Rev = (Rev * 10) + Dig;
		Temp = Temp / 10;
	}
	
	printf("\n Reverse of %d is = %d", Num ,Rev);
	
return 0;
}		 			 			 			 		
		