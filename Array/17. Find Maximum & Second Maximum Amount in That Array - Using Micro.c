/// Find Maximum & Second Maximum Amount in That Array - Using Micro

#include<stdio.h>
#include<stdlib.h>
# define Size 5

int main()
{
	int i = 0, Bill[Size] = {0}, Max_Bill = 0, SMax_Bill = 0;
    
    for(i = 0; i <Size; i++)
    {
    	printf("\n Enter Bill Amount %d= ",i + 1);
    	scanf("%d",&Bill[i]);
    }
    	
    for(i = 0; i < Size; i++)	
    {
           if ((i == 0) || (Bill[i] > Max_Bill)) 
           {
    	       Max_Bill = Bill[i];
           }
    }
    
    for(i = 0; i < Size; i++)
    {
           if((Bill[i] != Max_Bill) && (Bill[i] > SMax_Bill))
           {
    	       SMax_Bill = Bill[i];
           }
    }
   
    system ("cls");
     
    printf("\n Entered Bill Amounts Are =>\n\n");
    
    for(i = 0; i < Size; i++)
    {
    	printf("\n\n Amount in Bill No %d = %d",i + 101, Bill[i]);
    }				
	
	printf("\n**************************************\n");
	printf("\n Maximum Bill Amount is = %d", Max_Bill);
	printf("\n\n**************************************");
	
	printf("\n**************************************\n");
	printf("\n Second Maximum Bill Amount is = %d", SMax_Bill);
	printf("\n\n**************************************");
return 0;
}	