#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int throwDice(void);

int throwDice(void)
{   
    int dice1,dice2,total;
    dice1=(1+rand()%6);
    dice2=(1+rand()%6);
    total=dice1 + dice2;
    printf("player throwed  %d + %d total = %d \n",dice1,dice2,total);
    return total;

}

int main()
{ 
    srand(time(NULL));
    int total;
    total  = throwDice();

    switch(total)
    {
       case 7 : case 11:// If the total is  7 or 11 , the player wisn the game.
       {

             printf("Your number is : %d\n *************CONGRATULATIONS WON THE GAME ****************\n",total);
             break ;
       }

       case 2 : case 3 : case 12://If the total is 2 ,3 or 12 , the player loses the game
       {  
            printf("Number of player is  : %d\n***************UNFORTUNATELY  LOST THE GAME PLAY AGAIN************  ",total);
            break ;
       }

       default://If the total is not those number, total wil be number of player.
       {
            int numberOfPlayer,i,a=1;
            numberOfPlayer=total;
            printf("Number of player : %d\n",numberOfPlayer);
            total = throwDice();
            while(1)
            {
                 if(total==7)//If the total is 7,the player loses the game.
                 {
                      
                      printf("Number of players : %d\n  **********UNFORTUNATELY LOST THE GAME PLAY AGAIN***********\n ",total);
                      break;
                 }
                 else if(total==numberOfPlayer)
                 {
                      printf("Number of player  : %d\n **************CONGRATULATIONS WON THE GAME****************\n",total);
                      break;
                 }

                 
                 else
                  total=throwDice();
		  a++;
		  printf("%d.Attempt : %d \n",a,total);

            }

       }
    }





    return 0;
}
