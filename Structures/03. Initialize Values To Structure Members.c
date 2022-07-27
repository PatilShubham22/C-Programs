/// Initialize Values To Structure Members

#include<stdio.h>
#include<conio.h>

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
	struct Student Std1 = {15, "OMKAR PATIL", 88.4632, "BBA", 'A'};
	
	printf("\n Student Details Given =>\n");
	
	printf("\n Roll No = %d", Std1.Roll_No);
	printf("\n\n Student Name  = %s", Std1.S_Name);
	printf("\n\n Percentage = %0.2f", Std1.Per);
	printf("\n\n Course = %s", Std1.Course);
	printf("\n\n Grade = %c", Std1.Grade);
					
getch();	
return 0;
}									