#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
printf("Enter The Number of Quantity Purchased");
scanf("%d",&i);
if(i>100)
 {
  printf("You get 10% Discount");
  printf("Your Total=%d",i*350);
  printf("Your Discounted Total=%d",i=i-i*0.1);
 }
else
printf("your rate=%d",i*350);
getch();
}
