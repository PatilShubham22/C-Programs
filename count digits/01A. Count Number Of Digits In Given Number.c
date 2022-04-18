/// Count Number Of Digits In Given Number

#include <stdio.h>

int main ()
{
	int Num = 0, Temp = 0, dCnt = 0;
	
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
		Temp = Temp / 10;
		dCnt++;
	}
	
	printf("\n Digits In %d Are = %d",Num ,dCnt);
	
return 0;
}		 			 			 			 		
		