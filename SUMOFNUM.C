#include<stdio.h>
#include<conio.h>
void main ()
{
 int i,r=1, f;
 clrscr();
 scanf ("%d",&r);
 for (i=1;i<=r;i=i+1)
 {
  f= r*i;
  printf ("\n%d",f);
 //printf ("\n The sum of numbers:r=%d",r );
 }
 getch();
 }