#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
for(y=1;y<=5;y++)
 {
 printf("\n");
 for(x=1;x<=5;x++)
  {
   if(x==1||x==5||y==1||y==5)
    {
    printf(" *");
    }
   else
   {
   printf("  ");
   }
  }
 }
getch();
}