/// Program To Accept a Character From User And Check It Is Palindrome Or Not

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
	
	if(Num == Rev)
	{
		printf("\n As Given Number %d Equal To %d", Num, Rev);
		printf("\n Given Number %d Is Palindrome", Num);
	}	
	
	else
	{
		printf("\n As Given Number %d Not Equal To %d", Num, Rev);
		printf("\n Given Number %d Is Not Palindrome", Num);
	}	
	
return 0;
}		 			 			 			 		
		