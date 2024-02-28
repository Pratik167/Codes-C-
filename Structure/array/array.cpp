#include <stdio.h>

struct emp_record
{
	int emp_id;
	char emp_name[40];
	int emp_salary;
}/*x,a[10]*/;//yesari declare gareni hunxa
int main()
{
	struct emp_record record[4];//yesari decloare gareni ni hunxa.
	int i=0,h=0;
	//taking input in array of structure
	for(i=0;i<3;i++)
	{
		printf("\n Enter id:");
		scanf("%d",&record[i].emp_id);
		fflush(stdin);
		printf("\n Enter name:");
		gets(record[i].emp_name);//to input name and spaces 
		printf("\n Enter salary:");
		scanf("%d",&record[i].emp_salary);
		
		if(record[i].emp_salary>h)
		{
			h=record[i].emp_salary;
		}
		
	}
	printf("\n The highest salary is:%d",h);
	for(i=0;i<3;i++)
	{
		if(h==record[i].emp_salary)
		{
			printf("\n Name:");
			puts(record[i].emp_name);
			printf("\n Id: %d",record[i].emp_id);
		}
	}
	return 0;
}
