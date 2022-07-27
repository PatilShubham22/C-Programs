/// Program To Find Square Of Given Number - Using Function

#include<stdio.h>

int Square(int);

int main()
{
	int Num = 0;
	
	printf("\n Enter a Numbers To Get Square = ");
	scanf("%d",&Num);
	
	printf("\n (%d)^%d = %d", Num, Num, Square(Num));
	
	return 0;
}

int Square(int Num)
{
	int Sqr = 0;
	
	Sqr = Num * Num;
    
    return Sqr;
}

			