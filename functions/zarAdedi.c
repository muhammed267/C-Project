#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int zarFrekansAdedi(int adet )
{

  int i,j;
  int frekans1=0;
  int frekans2=0;
  int frekans3=0;
  int frekans4=0;
  int frekans5=0;
  int frekans6=0;

  srand(time(NULL));
  for (i=0;i<adet;i++)
  {

    j=rand()%6+1;

    if(j==1)
    {

      frekans1++;

    }

    else  if(j==2)
    {

      frekans2++;

    }

    else  if(j==3)
    {

      frekans3++;

    }

    else if(j==4)
    {

      frekans4++;

    }

    else if(j==5)
    {

      frekans5++;

    }

    else 
    {

      frekans6++;

    }

 }

    printf("%s %10s\n","Yüz","Frekans");
    printf("1%10d\n",frekans1);
    printf("2%10d\n",frekans2);
    printf("3%10d\n",frekans3);
    printf("4%10d\n",frekans4);
    printf("5%10d\n",frekans5);
    printf("6%10d\n",frekans6);


  return 0;

}




int main()
{

  int n;
  printf("Adedi giriniz : ");
  scanf("%d",&n);
  zarFrekansAdedi(n);
  return 0;

}
