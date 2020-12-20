#include<stdio.h>

static int a=10;

  void  test1()
  {
    static int b=17;
    a+=10;
    printf("test1 fonk. içindeki a değeri 1.: %d\n",a);
    a+=15;
    printf("test1 fonksiyonun içindeki 2.a değeri : %d\n",a);
    a+=3;
    printf("test1 fonk. içindeki 1.b değeri : %d\n",b);
    b+=10;
    printf("test1 fonk. içindeki 2.b değeri : %d\n",b);

  }

  void test2()
  {
    static int a=15;
    a+=20;
    printf("test2 fonksiyonunun içindeki a değeri: %d \n",a);

  }

  void test3()
  {
    static int a=545;
    printf("Test3 1.a:%d\n",a);
    a+=100;
    printf("Test3 2.a:%d\n",a);
  }

int main()
{
  static int a=1000;
  test3();
  printf("mainin içindeki a değeri : %d\n",a);
  test1();
  test2();
  {
   static int a=2000;
   a+=100;
   printf("mainin içindeki iç alandaki a değeri: %d\n",a);
  }
  a++;
  printf("mainin içindeki 2.a değeri: %d\n",a);
  test1();
  printf("mainin içindeki 3.a değeri: %d\n",a);
  test2();
  test3();
  return 0;

}
