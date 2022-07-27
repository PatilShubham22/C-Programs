///3rd Type of Function = Accepts Nothing Returns Something

#include<stdio.h>
#include<conio.h>

int Add ();

int main()
{
	int Sum = 0;
	
	Sum = Add();
	
	printf("\n Addition Of 2 Numbers = %d", Sum);
	
	getch();
	return 0;
}

int Add ()
{
	int N1 = 0, N2 = 0, Sum = 0;
	
	printf("\n Enter 2 Numbers To Make Addition = ");
	scanf("%d%d",&N1, &N2);
	
	Sum = N1 + N2;
	
	return Sum;
}																																	
	