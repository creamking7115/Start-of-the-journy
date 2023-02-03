#include<stdio.h>
#include<conio.h>
struct a{
int roll;
char name[20];
int marks;
};
typedef struct a student;
int main()
{
int i,j,y,k,max=0,min=0;
student st1[3];
clrscr();
for(i=0;i<=2;i++)
{
printf("\nEnter Roll no");
scanf("%d",&st1[i].roll);
printf("\nEnter Name");
scanf("%s",&st1[i].name);
printf("Enter marks of student");
scanf("%d",&st1[i].marks);
}
/*for(i=0;i<=3;i++)
{
printf("\nThe details of the student are");
printf("\n%d",st1[i].roll);
printf("\n%s",st1[i].name);
printf("\n%d",st1[i].marks);
} */
printf("The Max marks of student");
for(i=0;i<=2;i++)
  {
	 if(st1[i].marks>max)
	 {
	 max=st1[i].marks;
	 j=i;
	 }
  }

printf("\nroll no=%d\nname=%s\nmarks=%d",st1[j].roll,st1[j].name,st1[j].marks);
for(i=0;i<=2;i++)
	{
	 if(st1[i].marks<max)
	 {
	 max=st1[i].marks;
	 k=i;
	 }
	}
printf("\nmin marks \nroll no=%d\nname=%s\nmarks=%d",st1[k].roll,st1[k].name,st1[k].marks);

getch();
return 0;
}