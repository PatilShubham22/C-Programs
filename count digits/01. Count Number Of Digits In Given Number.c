/// Count Number Of Digits In Given Number

#include <stdio.h>

int main ()
{
	int Num = 0, dCnt = 0;
	
	Up :
	printf("\nEnter a Positive Number =  ");
	scanf("%d",&Num);
	
	if(Num < 0)
	{
		printf("\n Please Enter a Positive Number\n ");
		goto Up;
	}
	
	while (Num > 0)
	{
		Num = Num / 10;
		dCnt++;
	}
	
	printf("\n Digits In Given Numbers Are = %d",dCnt);
	
return 0;
}		 			 			 			 		
		