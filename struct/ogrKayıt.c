#include<stdio.h>
#include<stdlib.h>
 
struct entry
{
    char name[20];
    char surname[20];
    int  age;
    long number;
};

int main()
{
   struct entry *p;
   struct entry student;
   // printf("%d\n",sizeof(student));
   printf("Name of student : ");
   scanf("%s",student.name);
   printf("Surname of student : ");
   scanf("%s",student.surname);
   printf("Age of student : ");
   scanf("%d",&student.age);
   printf("Number of student : ");
   scanf("%ld",&student.number);
   printf("%s ",student.name);
   printf("%s",student.surname);
   return 0;
}
