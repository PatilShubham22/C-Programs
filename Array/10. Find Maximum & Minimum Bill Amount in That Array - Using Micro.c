/// Find Maximum & Minimum Bill in That Array - Using Micro

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

int main()
{
	
	int i = 0, Bill[Size] = {0}, Max_Bill = 0, Min_Bill = 0;
	
	for(i = 0; i < Size; i++)
	{
		printf("\n Enter Bill Amount %d = ", i + 1 );
		scanf("%d",&Bill[i]);
		
		if((i == 0) || Bill[i] > Max_Bill)
		{
			Max_Bill = Bill[i];
		}
		if((i == 0) || Bill[i] < Min_Bill)
		{
			Min_Bill = Bill[i];
		}	
	}
	
	system("cls");
	
	printf("\n Bills in The List Are =>\n\n");
	
	for(i = 0; i < Size; i++)
	{
		printf("\n\n Amount in Bill No %d = %d", i + 101, Bill[i]);
	}
	
	printf("\n\n*************************************\n");
	printf("\n Maximum Bill Amount is = %d", Max_Bill);
	printf("\n\n*************************************");
	
	printf("\n\n*************************************\n");
	printf("\n Minimum Bill Amount is = %d", Min_Bill);
	printf("\n\n*************************************");
	
	

	
return 0;
}	
	