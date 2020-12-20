#include<stdio.h>
int faktoriyel(int);

int faktoriyel(int a)
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
   int fakt;
   printf("Faktöriyelini almak istediginiz sayiyi giriniz : ");
   scanf("%d",&fakt);
   printf("%s %10s","Sayi","Faktoriyel\n");
   printf("%d %10d\n ",fakt,faktoriyel(fakt));
   return 0;
}
