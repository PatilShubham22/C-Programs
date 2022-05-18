/// Program To Count Vowels In Given String

#include<stdio.h>

int main()
{
	char Name[20] = {'\0'};
	int i = 0, vCnt = 0;
	
	printf("\n Enter a Name = ");
	gets(Name);
	
	while(Name[i] != '\0')
	{
		if(Name[i] == 'A' || Name[i] == 'E' || Name[i] == 'I' || Name[i] == 'O' || Name[i] == 'U' || Name[i] == 'a' || Name[i] == 'e' || Name[i] == 'i' || Name[i] == 'o' || Name[i] == 'u' )
		{
			vCnt++;
		}	
		i++;
	}
	
	printf("\n Count of Vowels In given String is = %d", vCnt);		
	
}	