#include<stdio.h>
int rules();
int round1();
 int main()
 {
     rules();
     printf("\n\n");
     round1();
     return 0;
 }
 int round1()
 {
     char name[50];
     printf("enter your name\n");
       printf("enter the money to deposit for the game\n");
     scanf("%s",name);
      printf("\n\n");
      int deposit1;
       printf("enter the money to deposit for the game\n");
     scanf("%d",&deposit1);
     printf("\n\n");
     printf("your current balance is %d\n",deposit1);
     printf("\n\n");
     int bet1;
     printf("%s enter the money to bet",name);
     scanf("%d",&bet1);
     printf("\n\n");
     if(bet1>deposit1)
     {
         printf("money exceeds\n");
         printf("enter again\n");
         scanf("%d",&bet1);
     }
     printf("\n\n");
     int computer1;
     for(int m=7;m<=10;m++)
     {
     computer1 = rand()%m;
     }
     int guess1;
     printf("guess a number form 1 to 10\n");
     scanf("%d",&guess1);
     printf("\n\n");
     if(guess1>10)
     {
         printf("number exceeds\n");
         printf("enter again\n");
         scanf("%d",&guess1);
     }
     printf("\n\n");
      if(guess1==computer1)
     {
         printf("you have won: %d\n",bet1);
         printf("\n\n");
         int bet2;
         bet2=bet1*10;
         int new_won;
         if(bet1==deposit1)
         {
             new_won=bet2+0;
         }
         else
         {
             new_won=bet2+deposit1;
         }
         printf("you have won %d as total\n",new_won);
     }
     else if(guess1!=computer1)
     {
         printf("you have loss %d",bet1);
         printf("\n\n");
         printf("the correct number is %d\n",computer1);
         printf("\n\n");
         int new_loss;
         new_loss = deposit1-bet1;
         printf("now you have %d as balance",new_loss);
         printf("\n\n");
         if(new_loss == 0)
         {
             printf("you are not having the balance to play \n have a nice day\n");
             
         }
         else
         {
             int desicion;
             printf("press 1 for yes \n press 2 for no \n");
             printf("do you want to continue\n");
             scanf("%d",&desicion);
             printf("\n\n");
         if(desicion==1)
         {
             rules();
             printf("\n\n");
             printf("now you have %d as balance",new_loss);
              printf("\n\n");
              int bet3;
              printf("%s enter the money to bet",name);
             scanf("%d",&bet3);
             printf("\n\n");
             if(bet3>new_loss)
     {
         printf("money exceeds\n");
         printf("enter again\n");
         scanf("%d",&bet3);
     }
     int guess2;
     printf("guess a number form 0 to 10\n");
     scanf("%d",&guess2);
     printf("\n\n");
     int computer2;
     computer2=9;
     if(guess2>10)
     {
         printf("number exceeds\n");
         printf("enter again\n");
         scanf("%d",&guess2);
     }
      if(guess2==computer2)
     {
         printf("you have won: %d\n",bet3);
         printf("\n\n");
         int b;
         b=bet3*10;
         int b1;
         if(bet3==new_loss)
         {
             b1=b+0;;
         }
         else
         {
             b1=b+new_loss;
         }
         printf("you have won %d as total\n",b1);
     }
     else if(guess2!=computer2)
     {
         printf("you have loss %d",bet3);
         printf("\n\n");
         printf("the correct number is %d\n",computer1);
         printf("\n\n");
         int b2;
         b2=new_loss-bet3;
         printf("you have %d as total",b2);
         printf("\n\n");
         if(b2==0)
         {
             printf("you are not having the balance to play \n have a nice day\n");
             
         }
     }
         }
         else if(desicion==2)
         {
             printf("have a nice day\n");
             
         }
         }
     }
 }
 int rules()
 {
     printf("-------------------------------------------------------\n");
     printf("rules\n");
     printf("1) enter the number between 1 to 10\n");
     printf("2) if u win you will get 10 times of your bet\n");
     printf("3) if you lost you will loose your bet \n");
     printf("4)if you win once you can't continue\n");
     printf("5)for every 2 games you can't continue\n");
      printf("-------------------------------------------------------\n");
 }
     
