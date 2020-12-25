#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void randomNumber(void);

void randomNumber()
{
    srand(time(NULL));

    //{2,4,6,8} to pick random numbers this set:
    int a;
    a = (1 + rand()%4)*2;
    printf("Random number is : %d\n",a);

    //{3,5,7,9,11} to pick random numbers this set :
    int b;
    b=(1+rand()%5)*2+1;
    printf("Random number is : %d\n",b);

    //{6,10,14,18,22} to pick rondom number this set :
    int c;
    c=(2+rand()%5)*4-2;
    printf("Random number is : %d\n",c);

}

int main()
{

   randomNumber();
   return 0;

}
