/// Convert Given String To Upper Case 

#include<stdio.h>

int main()
{
	char Name[20] = {'\0'};
	int i = 0;
	
	printf("\n Enter a Name = ");
	gets(Name);
	
	while(Name[i] != '\0')
	{
		if(Name[i] >= 'a' && Name[i] <= 'z')
		{
			Name[i] = Name[i] - 32;
		}	
		i++;
	}
	
	printf("\n Given String is After Convert into Upper Case = %s",Name);
return 0;	
}			