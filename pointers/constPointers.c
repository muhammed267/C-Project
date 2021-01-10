#include<stdio.h>
int main()
{
 /*  //CONST POINTER 
   int num1=5,num2=10 ;
   int *const ptr=&num1;//Address of ptr can not change but we can change the value 
   printf("Before the alteration :\n num1 = %d num2 = %d\n",num1,num2);
   //ptr=&num2// Wrong 
   *ptr=8;
   printf("Later the alteration :\n num1 = %d num2 = %d",num1,num2);

*/
   //CONSTANT TO POINTER
/*
   int num1=5,num2=10 ;
   const int* ptr=&num1;//Value of ptr can not change but we can change the address 
   printf("Before the alteration :\n num1 = %d\n num2 = %d\n",num1,num2);
   printf("Address of num1 :%p\n Adress of num2 : %p\nadress of ptr : %p\n",&num1,&num2,ptr);
   ptr=&num2; 
   //*ptr=8;//wrong
   printf("Later the alteration :\n num1 = %d\nnum2 = %d\n",num1,num2);
   printf("Address of num1 :%p\n Adress of num2 : %p\n adress of ptr : %p\n",&num1,&num2,ptr);
*/

  //CONSTANT POINTER TO CONSTANT

/*
   int num1=5,num2=10 ;
   const int* const ptr=&num1;//Value and address  of ptr can not change 
   printf("Before the alteration :\n num1 = %d\n num2 = %d\n",num1,num2);
   printf("Address of num1 :%p\n Adress of num2 : %p\nadress of ptr : %p\n",&num1,&num2,ptr);
   //ptr=&num2; //wrong 
   //*ptr=8;//wrong
   printf("Later the alteration :\n num1 = %d\nnum2 = %d\n",num1,num2);
   printf("Address of num1 :%p\n Adress of num2 : %p\n adress of ptr : %p\n",&num1,&num2,ptr);
*/
   return 0;
}
//Muhammed ABA 10/01/2021
