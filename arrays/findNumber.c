#include<stdio.h>

int main()
{  int number,i,check=0;
   int n[]={45,45,54,89,78,25,42,4,54,54};
   int size = sizeof(n)/sizeof(n[0]);


     printf("Enter the number you  want to find : ");
     scanf("%d",&number);
     for( i=0;i<size;i++)
     {
        if(n[i]==number)
        {

          check++;
         // break;
        }
     }
     if(check==0)
       printf("The number you looking for is not in the  array.\n ");
     else
       printf("The number you looking for is in the  array.How many times?: %d\n ",check);



return 0;

}
//Muhammed ABA  02/01/2021
