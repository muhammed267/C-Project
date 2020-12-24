#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int  main ()
{
     srand(time(NULL));
     int i,x;
     for (i=0;i<20;i++)
     {
          x=6+(rand()%15);
          if(x%4==0)
                printf("%d\n",x);

     }

return 0;


}


