#include<stdio.h>
int plus(int number1,int number2){
	return number1+number2;
}
int minus(int number1,int number2){
        return number1-number2;
}
int times(int number1,int number2){
        return number1*number2;
}
int divide(int number1,int number2){
        return number1/number2;
}
int main (){
int number1,number2;
printf("Please enter two number\n");
printf("Number one :");
scanf("%d",&number1);
printf("Number two :");
scanf(" %d",&number2);
printf("Plus : %d\n",plus(number1,number2));
printf("Minus : %d\n",minus(number1,number2));
printf("Times : %d\n",times(number1,number2));
printf("Divide : %d\n",divide(number1,number2));

return 0;
}
