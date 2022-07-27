/// Program To Calculate Factorial of Given Number - Using Function

#include<stdio.h>
#include<conio.h>

long long int Factorial_of_Number(int);

int main()
{
	int Num = 0;
	long long int Res = 0;
	
	printf("\n Enter a Number To Get Its Factorial = ");
	scanf("%d",&Num);
	
	Res =  Factorial_of_Number(Num);
	
	printf("\n factorial of Given Number %d = %lld",Num, Res);
	
	getch();
	return 0;
}	
	
long long int Factorial_of_Number(int Num)
{
	long long int Fact = 1;
	
	while(Num > 1)
	{
		Fact = Fact * Num;
		Num--;
	}
	
	return Fact;
}							