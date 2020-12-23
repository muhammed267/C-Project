#include<stdio.h>

float priceCalc(float);

float priceCalc(float time)
{
    float cost;
    if(time<3)
    {
        cost = 2;
        return cost;
    }
    else if(time>3.00 && time<24.00)
    {    
        cost = 2+(time-3)*0.5;
       printf("%.2f",cost);
        return cost ;
    }
    else
        cost = 10;
        return cost ;
}

int main()
{
    float h1=0,h2=0,h3=0;
    float totalHour=0,totalPrice=0,p1=0,p2=0,p3=0;
    for(int i=1;i<=3;i++)
    {
        float  hour;
        printf("Enter information of %d. customer :  ",i);
        scanf(" %f",&hour);
        if(i==1)
        {
            p1=priceCalc(hour);
            h1=hour;
        }
        else if (i==2)
        {
            p2=priceCalc(hour);
            h2=hour;
        }
        else 
        {
            p3=priceCalc(hour);
            h3=hour;
        }
            totalHour+=hour;
            totalPrice=p1+p2+p3;

    }
             totalPrice=p1+p2+p3;
             printf("%s  %10s     %9s ","CAR","HOUR","PRICE\n");
             printf(" 1  %10.2f   %10.2f \n",h1,p1);
             printf(" 2  %10.2f   %10.2f \n",h2,p2);
             printf(" 3  %10.2f   %10.2f \n",h3,p3);
             printf(" %s %10.2f   %10.2f\n","TOPLAM",totalHour,totalPrice);
}
