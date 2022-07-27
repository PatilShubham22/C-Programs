///1st Type of Function = Accepts Nothing Returns Nothing

#include<stdio.h>
#include<conio.h>

void Add (void);
int main()
{
	Add();
	getch();
	return 0;
}

void Add ()
{
	int No1 = 0, No2 = 0, Sum = 0;
	
	printf("\n Enter 2 Numbers To Make Addition = ");
	scanf("%d%d",&No1,&No2);
	
	Sum = No1 + No2;
	
	printf("\n Sum of %d & %d = %d", No1, No2, Sum);
	
	return;
}																																	
	