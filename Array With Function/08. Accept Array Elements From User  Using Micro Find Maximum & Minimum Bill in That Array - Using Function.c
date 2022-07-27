/// Accept Array Elements From User  Using Micro Find Maximum & Minimum Bill in That Array - Using Function

#include<stdio.h>

#define Size 5

void Accept_Array(int Num[ ]);
int Maximum_Num(int Num1[ ]);
int Minimum_Num(int Num2[ ]);

int main()
{
	
	int Bill[Size] = {0};
	
	Accept_Array(Bill);
	
	printf("\n\n*************************************\n");
	printf("\n Maximum Bill Amount is = %d",Maximum_Num(Bill));
	printf("\n\n*************************************");
	
	printf("\n\n*************************************\n");
	printf("\n Minimum Bill Amount is = %d",Minimum_Num(Bill));
	printf("\n\n*************************************");
	
}	

void Accept_Array (int Num[ ])
{		
    int i = 0;
    
	for(i = 0; i < Size; i++)
	{
		printf("\n Enter Bill Amount %d = ", i + 1 );
		scanf("%d",&Num[i]);
	}	
	return;
	
}	

int Maximum_Num(int Num1[ ])		
{
	int i = 0, Max = 0;
	
	for(i = 0; i < Size; i++)
	{
		if((i == 0) || (Num1[i] > Max))
		{
			Max = Num1[i];
		}
	}
	return Max;			
}	

int Minimum_Num(int Num2[ ])		
{
	int i = 0, Min = 0;
	
	for(i = 0; i < Size; i++)
	{
		if((i == 0) || (Num2[i] < Min))
		{
			Min = Num2[i];
		}
	}
	return Min;			
}	
	