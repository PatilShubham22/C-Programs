/// Setting Values To Structure Members

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Student
{
	int Roll_No;
	char S_Name[20];
	float Per;
	char Course[16];
	char Grade;
};

int main()
{
	struct Student Std1;
	
	Std1.Roll_No = 15;
	strcpy(Std1.S_Name, "ROHIT PATIL");
	Std1.Per = 89.6789;
	strcpy(Std1.Course, "BBA");
	Std1.Grade = 'A';
	
	printf("\n Student Details Given =>\n");
	
	printf("\n Roll No = %d", Std1.Roll_No);
	printf("\n\n Student Name = %s", Std1.S_Name);
	printf("\n\n Percentage = %f", Std1.Per);
	printf("\n\n Course = %s", Std1.Course);
	printf("\n\n Grade = %c", Std1.Grade);
					
getch();	
return 0;
}									