#include<stdio.h>

void maximum(int x,int y,int z)
{
  if(x>y && x>z)
  {

    printf("maximum number: %d\n ",x);

  }

  else if (y>z)
  {

    printf("maximum number: %d \n",y);

  }

  else
  {

    printf("maximum number: %d\n ",z);

  }


}

int main()
{

  int a,b,c;
  printf("Please enter 3 numbers\n: ");
  scanf("%d %d %d",&a,&b,&c);
  maximum(a,b,c);

  return 0;

}

