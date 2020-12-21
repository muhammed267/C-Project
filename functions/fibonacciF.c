#include<stdio.h>

long double  fibonacci(int);

long double fibonacci(int n)
{

  if(n==0 || n==1)
  {
    return n;
  }
  else
  {
    return (fibonacci(n-1)+fibonacci(n-2));
  }

}

int main()
{
    int num,i;
    printf("Please enter a number : ");
    scanf("%d",&num);
    for(i=0;i<=num-1;i++)
    {
    printf("%2.Lf,",fibonacci(i));
    }
    printf("%2.Lf\n",fibonacci(num));

    return 0;
}
