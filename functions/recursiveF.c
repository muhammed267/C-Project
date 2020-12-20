
#include<stdio.h>
long double faktoriyel(int);

long double faktoriyel(int a)
{

     if (a<=1)
     {
       return 1;
     }
     else
     {
       return (a*faktoriyel(a-1));
     }

}

int main()
{
   int fakt,i;
   printf("Kaçıncı sayiya kadar faktoriyel almak istediginiz sayiyi giriniz : ");
   scanf("%d",&fakt);
   printf("%s %5s\n","Sayi","Faktoriyel");

   for(i=1;i<=fakt;i++)
   {
     printf("%d! = %2.Lf\n ",i,faktoriyel(i));
   }
 return 0;
}
