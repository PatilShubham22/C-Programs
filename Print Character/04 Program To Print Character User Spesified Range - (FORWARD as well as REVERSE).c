/// Program To Print Character User Spesified Range - (FORWARD as well as REVERSE)
#include<stdio.h>
#include<conio.h>

int main()
{
	char ch = '\0', S_Char= '\0', E_Char = '\0'; 
	
	printf("\nEnter Starting Character = ");
	S_Char = getche();
	
	printf("\nEnter Ending Character = ");
	E_Char = getche();
	
	if(S_Char < E_Char)
	{
	         for(ch = S_Char; ch <= E_Char; ch++)
	         {
		           printf("\n %c", ch);
	         }
	}
	
	else if(S_Char > E_Char)
	{
		    for(ch = S_Char; ch >= E_Char; ch--)
		    {
		    	   printf("\n %c", ch);
		    }
	}	    	   
	
	else
	{
		    printf("\nBoth Characters Are Same");
	}	    		
		
		
	printf("\n\n Thanks For Input");	
	
return 0;
}
    
        
    
    