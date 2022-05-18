/* Program To Count White Spaces, Digits, Upper cases, Lower Cases, Special Symbols In Given String*/

#include<stdio.h>

int main()
{
	char Name[20] = {'\0'};
	int i = 0, SpaceCnt = 0, dCnt = 0, uprCnt = 0, lowCnt = 0, spCnt = 0;
	
	printf("\n Enter a Name = ");
	gets(Name);
	
	while(Name[i] != '\0')
	{
		if(Name[i] == ' ')
		{
			SpaceCnt++;
		}
		else if(Name[i] >= '0' && Name[i] <= '9')
		{
			dCnt++;
		}
		else if (Name[i] >= 'A' && Name[i] <= 'Z')
		{
			uprCnt++;
		}
		else if (Name[i] >= 'a' && Name[i] <= 'z')
		{
			lowCnt++;
		}
		else 
		{
			spCnt++;
		}			
		i++;
	}
	
	printf("\n Count of White Spaces In given String is = %d", SpaceCnt);		
	
	printf("\n\n Count of Digits In given String is = %d", dCnt);
	
	printf("\n\n Count of Upper Case Lerrers In given String is = %d", uprCnt);
	
	printf("\n\n Count of Lower Case Letters In given String is = %d", lowCnt);
	
	printf("\n\n Count of Special Symbols In given String is = %d", spCnt);
	
}	