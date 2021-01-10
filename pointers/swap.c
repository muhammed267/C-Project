#include<stdio.h>

int main()
{
   int a=12,b=6,*x,*y,*temp;
   x=&a;
   y=&b;

   printf("a=%d  b=%d\n",*x,*y);

   temp=y;
   y=x;
   x=temp;

   printf("a=%d  b=%d\n",*x,*y);
   printf("a = %d b =%d",a,b);

  return 0;
}
