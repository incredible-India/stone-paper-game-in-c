#include<stdio.h>
#include<windows.h>
#include<conio.h>
#define ENTER 13
#define TAB 9
#define BKSP 8
#define ESC 27
void goback(void);
void instruct(void);
void gotoxy(int ,int);
void game(void);
int main()
{
char ch;
gotoxy(40,12);
system("color 0a");
printf("Welcome TO THIS GAME");
gotoxy(40,16);
printf("PRESS ANY KEY TO CONTINUE");
getch(); read:
system("cls");
gotoxy(40,12);
printf("1: PLAY GAME ");

gotoxy(40,16);
printf("2 : <-- EXIT");
{
    char op;
    op=getch();
    if(op=='1')
    {
        game();
    }
    else if(op=='2')
    {


        system("cls");
        system("color 71");
         gotoxy(40,12);
        printf("THANX FOR VISITING US");
        getch();
        exit(0);
    }
    else{
    printf("\a");
    goto read;
    }

}


}
void instruct(void)
{
FILE *p;
p=fopen("instruct.dat","r");
char ch[100];

while(fgets(ch,9,p)!=NULL)
    printf("%s",ch);
fclose(p);



}
void gotoxy(int a,int b)
{

    COORD x;
    x.X=a;
    x.Y=b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),x);
}
void game(void)
{
    int k;
    char op,op2;
     srand(k);
    k=rand()%2;
    for(;;)
    {
             system("color 0a");
          system("cls");
          printf("P : PAPER\n");
          printf("\nC : SCISSORE\n");
          printf("\nS:  STONE");
          gotoxy(40,12);
        printf("YOUR CHOICE=> ");
        op=getch();
        if(op=='s')
        {    gotoxy(55,12);
            printf("STONE");
            if(k==0)
            {
                  gotoxy(43,16);
                printf("COMPUTER=> PAPER\n");
                gotoxy(43,20);
                printf("YOU LOSE!!!");
                system("color 0c");

            }else if(k==1)
            {
                         gotoxy(43,16);
                printf("COMPUTER=> SCISSORE\n");
                  gotoxy(43,20);
                printf("YOU won!!!");

            }else
            {
               game();

            }}
            else if(op=='p')
            {    gotoxy(55,12);
                 printf("PAPER");
            if(k==0)
            {
                           gotoxy(43,16);
                printf("COMPUTER=> SCISSORE\n");
                gotoxy(43,20);
                printf("YOU LOSE!!!");
                system("color 0c");


            }else if(k==1)
            {
                        gotoxy(43,16);
                printf("COMPUTER=> STONE\n");
                  gotoxy(43,20);
                printf("YOU won!!!");

            }else
            {
               game();

            }
            }
            else if(op=='c')
            {
                 gotoxy(55,12);

                 printf(" SCISSORE");
                if(k==0)
            {
                          gotoxy(43,16);
                printf("COMPUTER=> PAPER\n");
                  gotoxy(43,20);
                printf("YOU WIN!!!");

            }else if(k==1)
            {
                          gotoxy(43,16);
                printf("COMPUTER=> STONE\n");
                gotoxy(43,20);
                printf("YOU LOSE!!!");
                system("color 0c");

            }
            else
            {
               game();



        }

            }else
            {
              printf("\a");
              game();

            }
            goback();

    }




}
void goback(void)
{
    char ch;
    gotoxy(70,1);
    printf("PRESS <ENTER> TO CONTINUE");
    gotoxy(70,3);
      printf(" PRESS <BACK_SPACE> TO GO BACK");

    gotoxy(70,5);
     printf("PRESS <ESC> TO GO EXIT");
     ch=getch();
     if(ch==ENTER)
     {
         game();
     }else if(ch==ESC)
     {
         system("cls");
         system("color 72");
         gotoxy(40,12);
         printf("BYE BYE WILL MEET AGAIN");
         getch();
         exit(0);
     }else if(ch==BKSP)
     {
         system("cls");
         main();
     }
     else{
            printf("\a");
        goback();
     }




}
