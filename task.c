#include<stdio.h>
struct employee
{
     int e;
     char name[20];
     char designation[20];
     char dept[20];
     int sal;
};
int main()
{
     struct employee a;
     printf("Enter Employee Details:\n");
     printf("-------------------------------\n");
     printf("Enter Employee-Id : ");
     scanf("%d",&a.e);
     printf("Enter Name        : ");
     scanf("%s",a.name);
     printf("Enter Age : ");
     scanf("%s",a.age);
     printf("Enter Phone number : ");
     scanf("%s",a.Phone number);
     printf("Enter Salary      : ");
     scanf("%d",&a.sal);
     printf("-------------------------------");
     printf("\nEmployee Details: \n---------------------------------\n");
     printf("Employee-Id : %d\n",a.e);
     printf("Name        : %s\n",a.name);
     printf("Age : %s\n",a.age);
     printf("phone number: %s\n",a.phonenumber);
     printf("Salary      : %d\n",a.sal);
     return 0;
}
