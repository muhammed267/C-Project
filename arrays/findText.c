#include<stdio.h>
int main()
{
   int m=0,n=0;
   int checkText;
   int j,i,lengthText=0,lengthWanted=0,checkTest1=0;
   char typedText[100],wantedText[15];
   printf("Please write your text : ");
   scanf("%s",typedText);
   //gets(typedText);
   printf("Please write the text you are looking for:");
   scanf("%s",wantedText);

   while(typedText[m]!='\0')
   {
      lengthText++;
      m++;
   }

   while(wantedText[n]!='\0')
   {
      lengthWanted++;
      n++;
   }
   for(i=0;i<=lengthText-lengthWanted;i++)
   {
      checkText=0;
      if(typedText[i]==wantedText[0])
      {
         checkText++;
         for(j=1;j<lengthWanted;j++)
         {
            if(typedText[i+j]==wantedText[j])
               checkText++;//we found that how many word are same.
         }
      }
      if(checkText==lengthWanted)
      {
            checkTest1++;//we found that how many vocable(words) are same .
      }

   }
   printf("The word %s found %d times in the text.\n",wantedText,checkTest1);

return 0;


}
