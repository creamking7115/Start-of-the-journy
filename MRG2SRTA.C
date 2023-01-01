#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
int a[5]={2,4,9,11,21},b[7]={1,2,3,5,7,8,10},c[12];
clrscr();
for(i=0,j=0,k=0;i<=4,j<=6,k<=11;k++)
 {
 if(a[i]>b[j])
  {
   c[k]=b[j];
   j++;
  }
  else
  {
   c[k]=a[i];
   i++;
  }
 printf("\n%d",c[k]);
 }
getch();
}