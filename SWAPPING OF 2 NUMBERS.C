#include<stdio.h>
#include<conio.h>
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
void main()
{
	int a=10, b=20;
	clrscr();
	printf("before swap a is %d and b is %d",a,b);
	swap(&a,&b);
	printf("\nAfter swapping a is %d and b is %d",a,b);

getch();
}