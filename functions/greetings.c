#include<stdio.h>

void  ageF()
{

  int age;
  printf("How old are you ?: \n");
  scanf("%d",&age);
  printf("Age:%d\n",age);

}


void  nameSurname()
{

  char name[20];
  char surname[20];
  printf("What is your name?: \n");
  scanf("%s",name);
  printf("Name:%s\n",name);
  printf("What is your surname?: \n");
  scanf("%s", surname);
  printf("Surname:%s\n",surname);
  ageF();
}


void hometownF()
{

  char hometown[20];
  printf("What is your hometown?: \n");
  scanf("%s",hometown);
  printf("Hometown:%s\n",hometown);

}

void jobF()
{

  char job[20];
  printf("What is your job?: \n");
  scanf("%s",job);
  printf("Job:%s\n",job);

}

void phoneNumber()
{

   char phoneNumber[14];
  printf("What is your phone number?: \n");
  scanf("%s",phoneNumber);
  printf("Phone number:%s\n",phoneNumber);

}

void emailAddress()
{

  char emailAddress[30];
  printf("What is your e-mail adress?: \n");
  scanf("%s",emailAddress);
  printf("E-mail adress:%s\n",emailAddress);

}
int main()

{

  nameSurname();
  // ageF();
  hometownF();
  jobF();
  phoneNumber();
  emailAddress();

  return 0 ; 

}

