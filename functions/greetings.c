#include<stdio.h>

char  name[] = "talha";

void  hi()
{
  char name1[20];
  printf("What is your name? : \n");
  //fgets(name1,20,stdin);
  scanf("%s",name1);
  printf("Welcome to my world!\n");
  printf("My name is %s\n",name1);

} 

void  myAge()
{
  int age;
  printf("How old are you ?: \n");
  scanf("%d",&age);
  printf("My age is %d\n",age);
  

}

int main()
{

  hi();
  printf("****************\n");
  myAge();
  return 0 ; 

}
 
