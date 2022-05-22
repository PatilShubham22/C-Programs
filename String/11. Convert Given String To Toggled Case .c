/// Convert Given String To Toggled Case 

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
		else if(Name[i] >= 'a' && Name[i] <= 'z')
		{
			Name[i] = Name[i] - 32;
		}		
		i++;
	}
	
	printf("\n Given String is After Convert Into Toggled Case = %s",Name);
return 0;	
}			