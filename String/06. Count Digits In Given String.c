/// Program To Count Digits In Given String

#include<stdio.h>

int main()
{
	char Name[20] = {'\0'};
	int i = 0, dCnt = 0;
	
	printf("\n Enter a Name = ");
	gets(Name);
	
	while(Name[i] != '\0')
	{
		if(Name[i] >= '0' && Name[i] <= '9')
		{
			dCnt++;
		}	
		i++;
	}
	
	printf("\n Count Digits In given String is = %d", dCnt);		
	
}	