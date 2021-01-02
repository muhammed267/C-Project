#include<stdio.h>
#define BOYUT 10

int main()
{
      int i,numbers[BOYUT]={};
      float  sum=0;
   
      for(i=0;i<BOYUT;i++)
      {
         sum+=numbers[i];
         printf("numbers[%d] : %d\n",i,numbers[i]);
      }

   printf("Average : %.2f\n",sum/BOYUT);
}
