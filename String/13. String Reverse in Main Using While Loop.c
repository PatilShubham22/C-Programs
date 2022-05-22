/// String Reverse Copy Main

#include<stdio.h>

int main()
{
	char Name[20] = {'\0'};
	char RevName[20] = {'\0'};
	int i = 0, j = 0;
	
	printf("\n Enter a Name = ");
	gets(Name);
	
	while(Name[i] != '\0')
	{
		i++;
	}
	
	i--;
	
	while(i >= 0)
	{
	    RevName[j] = Name[i];
	    
	    i--;
	    j++;
	 }   
	 
	printf("\n Given String is = %s",Name);
	printf("\n\n Reverse String is = %s", RevName);
	
return 0;	
}			