
#include<stdio.h>
#include<stdlib.h>
int main()
{

   int *ptr,sum=0,num,i;
  printf("Enter number of elements : ");
  scanf("%d",&num);

  ptr=(int*) malloc(num*sizeof(int));/* (int*) calloc(n,sizeof(int))*/
  // printf("ptr adresi : %p : ",ptr);
  if(ptr==NULL)
  {
    printf("Error! memory not allocated.");
    exit(0);
  }

  //printf("Enter elements : ");
  for(i=0;i<num;i++)
  {
    printf("Enter elements : ");
    scanf("%d",ptr+i);
    sum +=*(ptr+i);
  }

  printf("Sum = %d : ",sum);
  free(ptr);
  printf(" address of ptr  : %p\n",ptr);
  return 0;

}
//Muhammed ABA 13/01/2021
