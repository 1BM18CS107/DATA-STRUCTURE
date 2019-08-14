#include<stdio.h>
#include<conio.h>
struct student
{
	char id[50];
	int marks;
	int age;
}s1;
int main()
{
clrscr();
printf("Enter the student id of the student\n");
gets(s1.id);
printf("Enter the age of the student\n");
scanf("%d",&s1.age);
printf("Enter the marks of the student");
scanf("%d",s1.marks);
if(s1.age>20 && s1.marks>=65)
{
	printf("You are eligible for admission");
}
else
{
	printf("You are not eligible");
}
getch();
return 0;
}