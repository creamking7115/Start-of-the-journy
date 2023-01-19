#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int st[10]={0};
int top=-1;
int val,i,x;
char ch;
do
{
clrscr();
printf("\npress p for push");
printf("\npress c for pop");
printf("\npress d for display");
printf("\npress e for Exit");
scanf("%c",&ch);
switch(ch)
   {
case 'p':if(top<=9)
	{
	 printf("Enter The Value");
	 scanf("%d",&val);
	 top++;
	 st[top]=val;
	break;
	}
	else
       {	printf("Thers no Place Empty");
	getch();   }
	break;
case 'c':if(top>=0)
	{
		printf("\npress 1 to print the top");
		printf("\npress 2 to just pop");
		printf("\npress 3 to exit");
		scanf("%d",&i);
	switch(i)
	{
	case 1:
		printf("The Current top is= ");
		 for(x=top;x>=0;x--)
		{
		printf("\n%d",st[x]);
		}
		getch();
		break;
	case 2:
	     top--;
	     break;
	case 3:exit(0);
	     break;
	default:
	 printf("wrong input");
	}
	}
	else
	      {	printf("There are no Elements in stack");
		getch();
		} break;
case 'd':
       for(x=top;x>=0;x--)
       {
       printf("\n%d",st[x]);
       }
       getch();
       break;

case 'e':exit(0);
	 getch();
	 break;
default:
	printf("default setting");
	getch();
	break;
 }
 }
while(1);
}