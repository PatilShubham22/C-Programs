/// Find Maximum & Minimum Bill Amount From User Inputted Bills - Using Function

#include<stdio.h>

int Maximum_Bill (int);
int Minimum_Bill(int);

int main()
{
	int Res = 0, res = 0, cnt = 0;
	
	printf("\n Enter How Many Bills You Have => \n ");
	scanf("%d",&cnt);
	
	Res = Maximum_Bill(cnt);
	res = Minimum_Bill(cnt);
	
	printf("\n %d is Maximum Bill",Res);
	printf("\n %d is Minimum Bill", res);
	return 0;
}	
	
int Maximum_Bill(int cnt)
{
	int i = 0, Amt= 0, Max_Bill = 0;
		
	for(i = 1; i <= cnt; i++)
	{
	   printf("\n Enter Amount No. %d = ", i);
	   scanf("%d",&Amt);
	   
	   if((i == 1) || (Amt > Max_Bill))
	   {
	   	Max_Bill = Amt;
	   }
	 }     
   return Max_Bill;
}	  	 

int Minimum_Bill(int cnt)
{
	int i = 0, Min_Bill = 0, Amt = 0;
	
	for(i = 1; i <= cnt; i++)
	{
		printf("\n Enter Amount %d = ", i);
		scanf("%d",&Amt);
		
		if((i == 0) || (Amt < Min_Bill))
		{
		 	Min_Bill = Amt;
		 }
	  } 		 		
		return Min_Bill;
}		 		 		
	