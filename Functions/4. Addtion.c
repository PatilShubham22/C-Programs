///4th Type of Function = Accepts Something Returns Something

#include<stdio.h>
#include<conio.h>

int Add (int, int);

int main()
{
	int No1 = 0, No2 = 0, Sum = 0;
	
	printf("\n Enter 2 Numbers To Make Addtion = ");
	scanf("%d%d",&No1, &No2);
	
	Sum = Add(No1, No2);
	
	printf("\n Addition Of  %d & %d = %d",No1, No2, Sum);
	
	getch();
	return 0;
}

int Add (N1, N2)
{
	int Sum = 0;
	
	Sum = N1 + N2;
	
	return Sum;
}																																	
	