#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,x=0;
int a[3]={1,2,3};
clrscr();
do
 {
   x=x+a[i];
   i++;
 }
while(i<=2);
 printf("%d",x);

getch();
}