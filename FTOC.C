#include<stdio.h>
#include<conio.h>
void main()
{
int f,c;
clrscr();
printf("This Program is for converting C To F");
printf("\n plz enter the temperature in C");
scanf("%d",&c);
f=c*9/5+32;
printf("\nTemperature in F=%d",f);
 if(f>108)
   {
    printf("The Person Has Fever");
   }
     if(f>85&&f<108)
     {
      printf("The Body Temperature is Normal");
     }
       if(f<85)
       {
	printf("The Person Has Low Temperature");
       }
getch();
}