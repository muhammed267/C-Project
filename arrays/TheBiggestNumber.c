#include<stdio.h>
//#define BOYUT 10
int main()
{
   int n[10]={4,545,55,68,86,45,44,45,33,25};
   int boyut=sizeof(n)/sizeof(n[0]);
   int max=n[0],i,maxInd;
   for( i=0;i<boyut;i++)
   {
      printf("n[%d] : %d\n",i,n[i]);
      if(max<n[i])
      {
          max=n[i];
          maxInd=i;
      }
   }
   printf("Max : %d  Ind : %d\n",max,maxInd);
   return 0;
}
