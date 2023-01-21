#include<stdio.h>
#include<conio.h>
void main()
{
int i,t,y;
int x[10]={1,9,8,6,6,5,7,3,2,1};
clrscr();
printf("This program is for Bubble Sort");
for(i=0;i<=9;i++)
 {
   for(y=0;y<=9;y++)
      {
	 if(x[y]>x[y+1])
	 {
		t=x[y];
	    x[y]=x[y+1];
	    x[y+1]=t;
	 }
       }
  }
for(i=0;i<=9;i++)
{
printf("%d",x[i]);
 }
getch();
}