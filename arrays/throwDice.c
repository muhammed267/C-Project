#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define BOYUT 6
int main()
{ 
   srand(time(NULL));
   int face,number=6000,frequency[BOYUT]={0};
   for(int i=0;i<number;i++)
   {
       face = 1+rand()%6;
       ++frequency[face-1];
   }
   printf("%s %14s\n","SIDE","FREQUENCY");
   for(int j=1;j<=BOYUT;j++)
   {
       printf("%d %13d\n",j,frequency[j-1]);
   }
return 0;

}
