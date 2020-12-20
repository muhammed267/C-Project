#include<stdio.h>

void  kare(int sayi)
{

int i;
for(i=1;i<=sayi;i++)
{

	printf("   %d",(i*i));


}
printf("\n");
}
int main(){
  int n;
  printf("Sayi giriniz: ");
  scanf("%d",&n);
  kare(n);

return 0;
}
