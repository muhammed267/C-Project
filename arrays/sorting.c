#include<stdio.h>
int main()
{ 
  int i,j,temp,k;
  int numbers[10]={10,5,9,8,2,7,3,1,6,4};
  int size=sizeof(numbers)/sizeof(numbers[0]);
  printf("%d",size);
  for(i=0;i<size-1;i++)
  {
     for(j=i+1;j<size;j++)
     {
         if(numbers[i]>numbers[j])
         {
             temp=numbers[i];
             numbers[i]=numbers[j];
             numbers[j]=temp;
         }
     }
     for(k=0;k<size;k++)
     {
      printf("%3d",numbers[k]);
     }
     printf("\n");

  }
  for(i=0;i<size;i++)
  printf("%3d",numbers[i]);

return 0;
}
