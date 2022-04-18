///Program To Find Cube Of Given Number

#include<stdio.h>

int main()
{
	int Num = 0, Cube = 0;
	
	printf("\n Enter an Integer Number = ");
	scanf("%d",&Num);
	
	Cube = Num * Num * Num;
	
	printf("\n Cube Of Given Number = (%d)^3 = %d ", Num, Cube);
	
return 0;
}