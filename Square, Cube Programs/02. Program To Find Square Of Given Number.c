///Program To Find Square Of Given Number

#include<stdio.h>

int main()
{
	int Num = 0, sqr = 0;
	
	printf("\n Enter an Integer Number = ");
	scanf("%d",&Num);
	
	sqr = Num * Num;
	
	printf("\n Square Of Given Number = (%d)^2 = %d ", Num, sqr);
	
return 0;
}