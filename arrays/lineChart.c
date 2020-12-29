#include<stdio.h>
#define SIZE 10

int main ()
{

    int value[SIZE]={9,5,6,8,10,5,8,6,5,2};
    printf("%s %12s %10s\n","ELEMENT","VALUE","STARS" );
    for(int i=1;i<=SIZE;i++)
    {
       printf("%5d%13d      ",i,value[i-1]);
       for (int j=0;j<value[i-1];j++)
       {
          printf("%c",'*');
       }
       printf("\n");

    }
return 0;

}
