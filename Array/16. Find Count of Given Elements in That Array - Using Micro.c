/// Find Count of Given Elements in That Array - Using Micro

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

int main()
{
	
	int i = 0, Bill[Size] = {0}, Acnt = 0;
	
	for(i = 0; i < Size; i++)
	{
		printf("\n Enter Bill Amount %d = ", i + 1 );
		scanf("%d",&Bill[i]);
		
		if(Bill[i] == Bill[i])
		{
			Acnt++;
		}
	}
	
	
	printf("\n Bills in The List Are =>\n\n");
	
	for(i = 0; i < Size; i++)
	{
		printf("\n\n Amount in Bill No %d = %d", i + 101, Bill[i]);
	}
	
	printf("\n\n*************************************\n");
	printf("\n Count of Given Bill Amounts Are = %d", Acnt);
	printf("\n\n*************************************");

	
return 0;
}	
	