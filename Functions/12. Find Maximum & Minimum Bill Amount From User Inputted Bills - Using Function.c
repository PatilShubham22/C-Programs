/// Find Maximum & Minimum Bill Amount From User Inputted Bills - Using Function

#include<stdio.h>

void Max_Min_Bill (int);

int main()
{
	int Res = 0, cnt = 0;
	
	printf("\n Enter How Many Bills You Have => \n ");
	scanf("%d",&cnt);
	
	Max_Min_Bill(cnt);
	return 0;
}	
	
void Max_Min_Bill(int cnt)
{
	int i = 0, Amt= 0, Max_Bill = 0, Min_Bill = 0;
		
	for(i = 1; i <= cnt; i++)
	{
	   printf("\n Enter Amount No. %d = ", i);
	   scanf("%d",&Amt);
	   
	   if((i == 1) || (Amt > Max_Bill))
	   {
	   	Max_Bill = Amt;
	   }
	   if((i == 1) || (Amt < Min_Bill))
	   {
	   	Min_Bill = Amt;
	   }	
	 }     
	 
	 printf("\n %d is Maximum Bill \n\n ",Max_Bill);
	 
	 printf("\n %d is Minimum Bill ",Min_Bill);
   return;
}	  	 		 		
	