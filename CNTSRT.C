#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int a[5]={1,2,1,2,3},b[5]={0};
clrscr();
for(i=0;i<=4;i++)
{
b[a[i]]=b[a[i]]+1;
}
for(i=0;i<=4;i++)
printf("\n%d%d",i,b[i]);
getch();
}