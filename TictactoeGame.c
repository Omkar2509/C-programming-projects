#include<stdio.h>
#include<windows.h>
 char greed[10]={'0','1','2','3','4','5','6','7','8','9'};

void main()
{

    int choice1, choice2, temp=0;
    dashboard();
    int k;
    for(k=1; k<=5; k++)
    {

    printf("\n\n\t\t\tPLAYER : 1 ENTER YOUR CHOICE :");
    scanf("%d", &choice1);
    system("cls");
    int i;
    for(i=1; i<=9; i++)
    {
       if(choice1==i)
         {
           greed[i]='X';
         }
    }
    dashboard();
    if(greed[1]==greed[2]&&greed[2]==greed[3]&&greed[3]=='X'||greed[1]==greed[5]&&greed[5]==greed[9]&&greed[9]=='X'
     ||greed[1]==greed[4]&&greed[4]==greed[7]&&greed[7]=='X')
    {
        printf("\n\n\t\t\tPLAYER : 1 IS WIN");
        break;
        getch();
    }
     else if(greed[7]==greed[8]&&greed[8]==greed[9]&&greed[9]=='X'||greed[7]==greed[5]&&greed[5]==greed[3]&&greed[3]=='X')
    {
        printf("\n\n\t\t\tPLAYER : 1 IS WIN");
        break;
        getch();
    }
    else if(greed[2]==greed[5]&&greed[5]==greed[8]&&greed[8]=='X'||greed[3]==greed[6]&&greed[6]==greed[9]&&greed[9]=='X')
    {
        printf("\n\n\t\t\tPLAYER : 1 IS WIN");
        break;
        getch();

    }
    else
    {
        temp=1;
    }
    
     printf("\n\n\t\t\tPLAYER : 2 ENTER YOUR CHOICE :");
    scanf("%d", &choice2);
    int j;
    for(j=1; j<=9; j++)
    {
        if(choice2==j)
        {
            greed[j]='0';
        }
        
    }
    dashboard();

     if(greed[1]==greed[2]&&greed[2]==greed[3]&&greed[3]=='0'||greed[1]==greed[5]&&greed[5]==greed[9]&&greed[9]=='0'
     ||greed[1]==greed[4]&&greed[4]==greed[7]&&greed[7]=='0')
    {
        printf("\n\n\t\t\tPLAYER : 2 IS WIN");
        break;
        getch();
    }
    else if(greed[7]==greed[8]&&greed[8]==greed[9]&&greed[9]=='0'||greed[7]==greed[5]&&greed[5]==greed[3]&&greed[3]=='0')
    {
        printf("\n\n\t\t\tPLAYER : 2 IS WIN");
        break;
        getch();
    }
    else if(greed[2]==greed[5]&&greed[5]==greed[8]&&greed[8]=='0'||greed[3]==greed[6]&&greed[6]==greed[9]&&greed[9]=='0')
    {
        printf("\n\n\t\t\tPLAYER : 2 IS WIN");
        break;
        getch();

    }
     else
    {
        temp=2;
    }
   
    
    }
    if (temp==1&&temp==2)
    {
        printf("\n\n\t\t\tMATCH DRAW");
    }
    

    
}

void dashboard()
{
    system("cls");
    printf("\n\n\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
    printf("\n\t\t\t\tTIC TAC TOE");
    printf("\n\n\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"); 
     printf("\n\n\t\t\tPlayer : 1(X) , Player : 2(0)");
     printf("\n\n\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
     printf("\n\n\t\t\t|       |       |       |");
      printf("\n\t\t\t|   %c   |   %c   |   %c   |", greed[1], greed[2], greed[3]);
       printf("\n\t\t\t|_______|_______|_______|");
        printf("\n\t\t\t|       |       |       |");
         printf("\n\t\t\t|   %c   |   %c   |   %c   |", greed[4], greed[5], greed[6]);
          printf("\n\t\t\t|_______|_______|_______|");
           printf("\n\t\t\t|       |       |       |");
            printf("\n\t\t\t|   %C   |   %c   |   %c   |", greed[7], greed[8], greed[9]);
             printf("\n\t\t\t|       |       |       |");










}
