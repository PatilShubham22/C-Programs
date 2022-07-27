/// Array of 5 Elements with Initialization & Accept & Display All Elements With Loop - Using Function

#include<stdio.h>
#include<conio.h>

void Accept_Array (int Num[ ], int);
void Display_Array( int Arr [ ], int);

int main()
{
	int Values[5] = {0};
	
	Accept_Array (Values, 5);
	
	printf("\n ********************************************");
	
	Display_Array (Values, 5);
	
	return 0;
}

void Accept_Array(int Num[ ], int size)
{
    int i = 0;
    
    for(i = 0; i < size; i++)
    {		
	printf("\n Enter Element No %d = ",i + 1);
	scanf("%d",&Num[i]);
    }
    return;
} 
	
void Display_Array(int Arr[ ], int size)
{
	int i = 0;
	
	for(i = 0; i < size; i++)
	{
		printf("\n Value of  Element No. %d = %d", i + 1, Arr[i]);
	}	
	
return;
}	
	