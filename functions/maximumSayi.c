#include<stdio.h>

int maximum(int,int,int);

int main()
{

  int a,b,c;
  printf("Please enter 3 numbers \n");
  printf("Number first  : ");
  scanf("%d",&a);
  printf("Number second : ");
  scanf("%d",&b);
  printf("Number third  : ");
  scanf("%d",&c);
  printf("Maximum number is : %d\n",maximum(a,b,c));
  return 0;

}


int maximum(int x,int y,int z)
{
  int max;

  if(x>y && x>z)
  {

    max=x;

  }

  else if (y>z)
  {

    max=y;

  }

  else
  {

   max=z;

  }

  return max;
}


