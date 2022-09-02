/// Find Count of Zero Elements in That Array Using Micro - Using Function

#include<stdio.h>

#define Size 5

void Accept_Array(int Num[ ]);
int Zero_Count(int Num1[ ]);

int main()
{
	int Bill[Size] = {0};

	Accept_Array(Bill);

	printf("\n Zero in Bill Amounts Are = %d",Zero_Count(Bill));

	return 0;
}

void Accept_Array(int Num[ ])
{
	int i = 0;

	for(i = 0; i < Size; i++)
	{
		printf("\n Enter Bill Amount %d = ", i + 1 );
		scanf("%d",&Num[i]);
	}
}

int Zero_Count(int Num1[ ])
{
		int i = 0, Zcnt = 0;

		for(i = 0; i < Size; i++)
		{
			if(Num1[i] == 0)
			{
			    Zcnt++;
		    }
        }
      return Zcnt;
}
