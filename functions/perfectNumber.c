#include<stdio.h>

int perfect(int);

int perfect(int number)
{

   int i,sum=0;
   for(i=1;i<number;i++)
   {
       if(number%i==0)
       {   // printf(" %d, ",i);
             sum+=i;
       }
   }

   if(sum==number )
   {
        printf(" %d  is a perfect number.\n",number);
   }
/*  else
   {
        printf("It is not a perfect number .");
   }
*/



}




int main ()
{
   int a;
  // printf("Enter a number : ");
  //scanf("%d",&a);

   for(int j=2;j<1000;j++)
   {
    perfect(j);
   }


   return 0;


}
