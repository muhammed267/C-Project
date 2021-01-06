#include<stdio.h>
//satır toplamını a dizisi sütun toplamı b dizisi ve tüm sayıların toplamını bulma 
int main()
{
   int arr[3][3]={{1,4,6},{9,5,32},{22,4,34}};
   int row=sizeof(arr)/sizeof(arr[0]);
   int column=sizeof(arr[0])/sizeof(arr[0][0]);
   int i,j,m,sum=0;
   int a[3]={0},b[3]={0};
   for(i=0;i<row;i++)
   {
      for(j=0;j<column;j++)
      {
         sum = sum + arr[i][j];
         a[i]+=arr[i][j];
         b[i]+=arr[j][i];
         printf("%5d",arr[i][j]);
      }
      printf("\n");
   }
      printf("\n  ");
  
   for(m=0;m<row;m++)
   {
      printf("Total in row    %d  :  %d,\n  ",m,a[m]);
      printf("Total in column %d  :  %d,\n  ",m,b[m]);  
   }
      printf("*****************\n  SUM : %d\n",sum);

// ıF IT IS  NOT A SQUARE MATRIX WE HAVE TO CREATE ONE MORE LOOP :

/* for(i=0;i<column;i++)
   {

      for(j=0;j<row;j++)
      {

         b[i]+=arr[j][i];

      }
      printf("\n");
   }
   
  for(m=0;m<row;m++)
  printf("%d. sutundaki toplam %d,\n  ",m,b[m]);

*/
  return 0;
}
