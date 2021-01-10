#include<stdio.h>

int main()
{
   int first,second,*p,*q,sum;
   p=&first;
   q=&second;

   printf("Please enter two integers to add : \n");

   printf("First Number  : ");
   scanf("%d",p/*&first*/);

   printf("Second Number : ");
   scanf("%d",q/*&second*/);


   sum=*p+*q;/* first+second */
   printf("Sum           : %d\n ",sum);

  return 0;
}
//Muhammed ABA  08/01/2021
