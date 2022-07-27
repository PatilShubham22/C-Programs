/// Find Maximum Number From 3 Numbers - Using Function

#include<stdio.h>

int Maximum_Num ();

int main()
{
	int Res = 0;
	
	printf("\n Enter 3 Numbers To Find Maximum Number =>\n ");
	
	Res = Maximum_Num();
	
	printf("\n %d is Maximum Number",Res);
	return 0;
}	
	
int Maximum_Num()
{
	int i = 0, Num= 0, Max_Num = 0;
		
	for(i = 1; i <= 3; i++)
	{
	   printf("\n Enter Number %d = ", i);
	   scanf("%d",&Num);
	   
	   if((i == 1) || (Num > Max_Num))
	   {
	   	Max_Num = Num;
	   }
	 }     
   return Max_Num;
}	  	 	
	