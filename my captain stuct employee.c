//struct of an employee//
#include<stdio.h>
struct employee
{
   char name[10];
   int age,salary,phonenumber[11];
};
int main()
{
 struct employee e[20];
 int i;
 for(i=0;i<20;i++)
{
   printf("enter the employee name,age,phonenumber,salary");
   scanf("%s%d%d%d",e[i].name,&e[i].age,&e[i].phonenumber,&e[i].salary),
   printf("%s\n%d\n%d\n%d",e[i].name,e[i].age,e[i].phonenumber,e[i].salary);
}
}
