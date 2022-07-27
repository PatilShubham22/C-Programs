/// find number is Even or Odd - Using Function

#include<stdio.h>

void Even_Odd(int);

int main()
{
	int Num = 0;
	
	printf("\n Enter a Number to Find its Even or Odd = ");
	scanf("%d",&Num);
	
	Even_Odd(Num);
	
	return 0;								
}

void Even_Odd(int Num)
{
	if(Num % 2 == 0)
	{
		printf("\n %d is an Even Number", Num);
	}
	else if(Num == 1)
	{
		printf("\n %d is Not an Even or Odd Number", Num);
	}
	else
	{
		printf("\n %d is an Odd Number", Num);
	}
	return;
}	