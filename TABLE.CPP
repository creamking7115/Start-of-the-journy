#include<stdio.h>
#include<conio.h>
void main()
{
int num,c,i;
clrscr();
printf("enter any number for table;");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
c=num*i;
printf("%d*%d=%d\n",num,i,c);
}
getch();
}