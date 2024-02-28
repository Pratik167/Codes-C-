 //WAP to enter name of 10 students, their roll numbers, and the marks in C programming.
 #include <stdio.h>
 
 struct student_record
 {
 int roll;
 int C_marks;
 char name[30];	
 };
 int main()
 {
 	int a,i=0;// makes a variable named 'a' of int data type.
 	struct student_record ramu,shyamu;// makes a variable x of student_record.
 	printf("Enter roll for ramu");
 	scanf("%d",&ramu.roll); 
 	fflush(stdin);
 	printf("Enter name for ramu");
 	gets(ramu.name);
 	printf("Enter marks for ramu");
 	scanf("%d",&ramu.C_marks);
 	
 	printf("%d",ramu);
	 return 0;
 }
