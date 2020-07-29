#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<windows.h>
using namespace std;


//initializing all B variables to true before the game starts....
bool B1=true,B2=true,B3=true,B4=true,B5=true,B6=true,B7=true,B8=true,B9=true;   //B---Block
    char turn='X';
    int turn_count=0;
    char Cursor_Readings[100];
    int B1_W=NULL,B2_W=NULL,B3_W=NULL,B4_W=NULL,B5_W=NULL,B6_W=NULL,B7_W=NULL,B8_W=NULL,B9_W=NULL;     //if at any moment B gets equals to NULL or 0 then winning message should be displayed
    int Winner=0;


void print_x_or_o(int x, int y, char ch)  //actual code for pritning a X or O in the blocks
{
    setcolor(15);
    if(ch == 'X')
    outtextxy(x,y,"X");
    else
    outtextxy(x,y,"O");
}

void Reset_All()  //reseting everything if user clicks new game
{
    B1=B2=B3=B4=B5=B6=B7=B8=B9=true;
    turn='X';
    turn_count=0;
    B1_W=B2_W=B3_W=B4_W=B5_W=B6_W=B7_W=B8_W=B9_W=NULL;
    Winner=0;
}


void get_message_x() //repetitively check after each turns that if turns = maximum turns(8) then its a game over state else print next player turn's message
{
     settextstyle(1,0,1);
     if(turn_count == 8)
     {
         outtextxy(10,60,"GAME__OVER....");
     }
     else
        outtextxy(10,60,"O's Turn");
}

void get_message_o() // same as above but now doing it for O .... we can also combine these two functions in a single function..
{
    settextstyle(1,0,1);
     if(turn_count == 8)
     {
         outtextxy(10,60,"GAME__OVER....");
     }
     else
        outtextxy(10,60,"X's Turn");

}
void getting_turns_func()  //intiliazing the turns logic or printing x or o logic...
{
    if(turn_count==0)  //even number of turn's will be always of x
        turn='X';
    if(turn_count==1) // odd...................................of O
        turn='O';
    if(turn_count==2)
        turn='X';
    if(turn_count==3)
        turn='O';
    if(turn_count==4)
        turn='X';
    if(turn_count==5)
        turn='O';
    if(turn_count==6)
        turn='X';
    if(turn_count==7)
        turn='O';
    if(turn_count==8)
        turn='X';
    if(turn_count==9)
        turn='O';
}



void setting_our_board()  // initial board setup
{
    setcolor(14); //setting up the color for board
    settextstyle(10,0,1);    //setting color for texts
    outtextxy(10,410,Cursor_Readings); // it displays cursor readings at specified x,y position on screen
    setcolor(14);
    settextstyle(10,0,4);
    outtextxy(100,10,"TIC_TAC_TOE_GAME");
    setcolor(14);
    rectangle(100,100,400,400);         //Main Board border
        rectangle(420,150,620,200);         //border for string containing a box called new game
        rectangle(420,250,620,300);
        rectangle(420,320,620,360);         //border for string containing a box called EXIT
        line(200,100,200,400);              //1st horizontal line for tic tac
        line(300,100,300,400);              //2nd horizontal line
        line(100,200,400,200);              // 1st vertical line
        line(100,300,400,300);             // 2nd vertical line

   setcolor(14);
   settextstyle(10,0,1);
   outtextxy(450,165,"NEW GAME"); //printing string NEW GAME at x,y co-ordinate in the box declared above;
    outtextxy(490,265,"EXIT");   //..................EXIT...............................
    //thats all for the box now our setup for the game is ready..
}

void NewGame() // control transfers to this function when user presses new game
{
   cleardevice();
   Reset_All();
   settextstyle(1,0,1);
   outtextxy(getmaxx(),getmaxy(),"LOADING_GAME");
   for(int i=0;i<80;i++)
    {
        outtext(".");
        delay(10);
    }
    cleardevice();
}


void lets_check_for_winner() // final function to check who is our winner
{
        if(B1_W==1&&B2_W==1&&B3_W==1)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;
            Winner=1;
         //   display_winner(Winner);
        }
        if(B4_W==1&&B5_W==1&&B6_W==1)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;
            Winner=1;
           // display_winner(Winner);
        }
        if(B7_W==1&&B8_W==1&&B9_W==1)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;
            Winner=1;
           // display_winner(Winner);
        }
        if(B1_W==1&&B5_W==1&&B9_W==1)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;
            Winner=1;
            //display_winner(Winner);
        }
        if(B3_W==1&&B5_W==1&&B7_W==1)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;
            Winner=1;
            //display_winner(Winner);
        }
        if(B1_W==1&&B4_W==1&&B7_W==1)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;
            Winner=1;
            //display_winner(Winner);
        }
        if(B2_W==1&&B5_W==1&&B8_W==1)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;
            Winner=1;
            //display_winner(Winner);
        }
        if(B3_W==1&&B6_W==1&&B9_W==1)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;
            Winner=1;
            //display_winner(Winner);
        }

        if(B1_W==2&&B2_W==2&&B3_W==2)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;
            Winner=2;
            //display_winner(Winner);
        }
        if(B4_W==2&&B5_W==2&&B6_W==2)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;
            Winner=2;
            //display_winner(Winner);
        }
        if(B7_W==2&&B8_W==2&&B9_W==2)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;
            Winner=2;
            //display_winner(Winner);
        }
        if(B1_W==2&&B5_W==2&&B9_W==2)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;
            Winner=2;
            //display_winner(Winner);
        }
        if(B3_W==2&&B5_W==2&&B7_W==2)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;
            Winner=2;
            //display_winner(Winner);
        }
        if(B1_W==2&&B4_W==2&&B7_W==2)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;
            Winner=2;
            //display_winner(Winner);
        }
        if(B2_W==2&&B5_W==2&&B8_W==2)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;
            Winner=2;
            //display_winner(Winner);
        }
        if(B3_W==2&&B6_W==2&&B9_W==2)
        {
            outtextxy(10,60,"Game Over...");
            B1=B2=B3=B4=B5=B6=B7=B8=B9=false;Winner=2;
            //display_winner(Winner);
        }
}

void get_status_after_game_over(int tempLx, int tempLy)
{
        settextstyle(1,0,1);
        if((tempLx>420&&tempLx<620&&tempLy>280&&tempLy<320))
        {
            outtextxy(460,410,"Exit           ");
        }
        else if((tempLx>420&&tempLx<620&&tempLy>180&&tempLy<220))
        {
            outtextxy(460,410,"New Game        ");
        }
        else if(tempLx>110&&tempLx<210&&tempLy>130&&tempLy<230)
        {
            if(B1)
            outtextxy(460,410,"Block-1         ");
            else
            outtextxy(460,410,"Not Allowed     ");
        }
        else if(tempLx>210&&tempLx<310&&tempLy>130&&tempLy<230)
        {
            if(B2)
            outtextxy(460,410,"Block-2         ");
            else
            outtextxy(460,410,"Not Allowed     ");
        }
        else if(tempLx>310&&tempLx<410&&tempLy>130&&tempLy<230)
        {
            if(B3)
            outtextxy(460,410,"Block-3         ");
            else
            outtextxy(460,410,"Not Allowed     ");
        }
        else if(tempLx>110&&tempLx<210&&tempLy>230&&tempLy<330)
        {
            if(B4)
            outtextxy(460,410,"Block-4         ");
            else
            outtextxy(460,410,"Not Allowed     ");
        }
        else if(tempLx>210&&tempLx<310&&tempLy>230&&tempLy<330)
        {
            if(B5)
            outtextxy(460,410,"Block-5         ");
            else
            outtextxy(460,410,"Not Allowed     ");
        }
        else if(tempLx>310&&tempLx<410&&tempLy>230&&tempLy<330)
        {
            if(B6)
            outtextxy(460,410,"Block-6         ");
            else
            outtextxy(460,410,"Not Allowed     ");
        }
        else if(tempLx>110&&tempLx<210&&tempLy>330&&tempLy<430)
        {
            if(B7)
            outtextxy(460,410,"Block-7         ");
            else
            outtextxy(460,410,"Not Allowed     ");
        }
        else if(tempLx>210&&tempLx<310&&tempLy>330&&tempLy<430)
        {
            if(B8)
            outtextxy(460,410,"Block-8         ");
            else
            outtextxy(460,410,"Not Allowed     ");
        }
        else if(tempLx>310&&tempLx<410&&tempLy>330&&tempLy<430)
        {
            if(B9)
            outtextxy(460,410,"Block-9         ");
            else
            outtextxy(460,410,"Not Allowed     ");
        }
        else if(Winner==1)
        {
            outtextxy(430,330,"X Wins          ");
        }
        else if(Winner==2)
        {
            outtextxy(430,330,"O Wins          ");
        }
        else if(turn_count==9)
        {
            outtextxy(430,330,"Draw            ");
        }
        else
        {
            outtextxy(460,410,"Ready           ");
        }

}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    settextstyle(10,0,1);
    outtextxy(10,60,"X's turn");
    while(1)
    {
       // GetCursorPos(&LP);
        POINT LP;
        int Lx,Ly;
        if (GetCursorPos(&LP)) {
              Lx = LP.x;
              Ly = LP.y;
              } //getting the initial cursor positions
        sprintf(Cursor_Readings,"X : %d Y: %d",Lx,Ly);
        setting_our_board();
        if(GetAsyncKeyState(VK_LBUTTON))  // simply checksif user has pressed any key or not
        {
            getting_turns_func();  //calling the getturn function for turn's logic
             if((Lx > 420 && Lx < 620 && Ly > 280 && Ly < 320))  //just making sure if user's pressed coordinates lies in this range then it must exit the game
             {
                 outtextxy(460,410,"Exiting............");
                 delay(600);
                 outtextxy(460,410,"DONE.....");
                 exit(0);
             }
               else if(Lx>420&&Lx<620&&Ly>180&&Ly<280)// user has actually pressed new game
               {
                   NewGame();
                   settextstyle(1,0,1);
                   outtextxy(10,60,"X's Turn");
               }

               else if(Lx>110&&Lx<210&&Ly>130&&Ly<230&&B1) //checking for 1st block or (0,0) position
                  {
                      if(turn == 'X')
                      {
                          get_message_x();
                          print_x_or_o(150,150,turn);
                          B1_W=1;
                      }
                       if(turn=='O')
                      {
                          get_message_o();
                           print_x_or_o(150,150,turn);
                            B1_W=2;
                       }
                    B1=false;
                    turn_count++;

                  }
                   else if(Lx>210&&Lx<310&&Ly>130&&Ly<230&&B2)         //Block-2
            {
                if(turn=='X')
                {
                    get_message_x();
                    print_x_or_o(250,150,turn);
                    B2_W=1;
                }
                if(turn=='O')
                {
                    get_message_o();
                    print_x_or_o(250,150,turn);
                    B2_W=2;
                }
                B2=false;
                turn_count++;

            }
            else if(Lx>310&&Lx<410&&Ly>130&&Ly<230&&B3)         //Block-3
            {
                if(turn=='X')
                {
                    get_message_x();
                    print_x_or_o(350,150,turn);
                    B3_W=1;
                }
                if(turn=='O')
                {
                    get_message_o();
                    print_x_or_o(350,150,turn);
                    B3_W=2;
                }
                B3=false;
                turn_count++;

            }
            else if(Lx>110&&Lx<210&&Ly>230&&Ly<330&&B4)         //Block-4
            {
                if(turn=='X')
                {
                    get_message_x();
                    print_x_or_o(150,250,turn);
                    B4_W=1;
                }
                if(turn=='O')
                {
                    get_message_o();
                    print_x_or_o(150,250,turn);
                    B4_W=2;
                }
                B4=false;
                turn_count++;
            }
            else if(Lx>210&&Lx<310&&Ly>230&&Ly<330&&B5)         //Block-5
            {
                if(turn=='X')
                {
                    get_message_x();
                    print_x_or_o(250,250,turn);
                    B5_W=1;
                }
                if(turn=='O')
                {
                    get_message_o();
                    print_x_or_o(250,250,turn);
                    B5_W=2;
                }
                B5=false;
                turn_count++;
            }
            else if(Lx>310&&Lx<410&&Ly>230&&Ly<330&&B6)         //Block-6
            {
                if(turn=='X')
                {
                    get_message_x();
                    print_x_or_o(350,250,turn);
                    B6_W=1;
                }
                if(turn=='O')
                {
                    get_message_o();
                    print_x_or_o(350,250,turn);
                    B6_W=2;
                }
                B6=false;
                turn_count++;

            }
            else if(Lx>110&&Lx<210&&Ly>330&&Ly<430&&B7)         //Block-7
            {
                if(turn=='X')
                {
                    get_message_x();
                    print_x_or_o(150,350,turn);
                    B7_W=1;
                }
                if(turn=='O')
                {
                    get_message_o();
                    print_x_or_o(150,350,turn);
                    B7_W=2;
                }
                B7=false;
                turn_count++;
            }
            else if(Lx>210&&Lx<310&&Ly>330&&Ly<430&&B8)         //Block-8
            {
                if(turn=='X')
                {
                    get_message_x();
                    print_x_or_o(250,350,turn);
                    B8_W=1;
                }
                if(turn=='O')
                {
                    get_message_o();
                    print_x_or_o(250,350,turn);
                    B8_W=2;
                }
                B8=false;
                turn_count++;
            }
            else if(Lx>310&&Lx<410&&Ly>330&&Ly<430&&B9)         //Block-9
            {
                if(turn=='X')
                {
                    get_message_x();
                    print_x_or_o(350,350,turn);
                    B9_W=1;
                }
                if(turn=='O')
                {
                    get_message_o();
                    print_x_or_o(350,350,turn);
                    B9_W=2;
                }
                B9=false;
                turn_count++;
            }

            lets_check_for_winner();

        }

        get_status_after_game_over(Lx,Ly);
        delay(10);
    }

    getch();
    closegraph();
    return 0;
}
