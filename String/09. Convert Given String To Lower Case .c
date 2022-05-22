/// Convert Given String To Lower Case 

#include<stdio.h>

int main()
{
	char Name[20] = {'\0'};
	int i = 0;
	
	printf("\n Enter a Name = ");
	gets(Name);
	
	while(Name[i] != '\0')
	{
		if(Name[i] >= 'A' && Name[i] <= 'Z')
		{
			Name[i] = Name[i] + 32;
		}	
		i++;
	}
	
	printf("\n Given String is After Convert Into Lower Case = %s",Name);
return 0;	
}			