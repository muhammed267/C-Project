#include<stdio.h>
//#include<sdtlib.h>

typedef struct Ders
{
   int DKod;
   int vize,finaln;
   double ort;
   int durum;
}D;


typedef struct Ogrenci
{
   int  OgrenciNo;
   char ad[20];
   int  DSayisi;
   D *Dersler;

}Ogr;


Ogr *bilgi_al(int OgrSayisi)
{
   for(int i=0;i< OgrSayisi;i++)
   {

      printf("%d.Ogrenci no: ",i);
      scanf("%d",Ogr.OgrenciNo);
   }



}


int main()
{
   int ogrSayisi;
   printf("*******Hosgeldiniz*******");
   printf("Ogrenci sayisi giriniz: ");
   scanf("%d",OgrSayisi);
   Ogr=(struct Ogrenci*)malloc(sizeof(struct Ogrenci)*(OgrSayisi));
   bilgi_al(OgrSayisi);
   return 0;
}
