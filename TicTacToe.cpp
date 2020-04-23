#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>

using namespace std;

class TicTacToe
{
    private:
        char board[3][3];
        bool moves[9];
    

        char firstplayer;

    public:
        TicTacToe(char firstplayer);
        void printBoard();
        void play();
        void placeX(int pos);
        void placeO(int pos);

};

TicTacToe::TicTacToe(char firstplayer)
{
     for(int i=0;i<sizeof(board[0]);i++)
    {
        for(int j=0;j<sizeof(board[0]);j++)
        {
            this->board[i][j]=' ';
        }
    }

    for(int k=0;k<sizeof(moves);k++)
    {
        this->moves[k]=false;
    }
    
    this->firstplayer=firstplayer;


}

void TicTacToe::printBoard()
{
   
    for(int i=0;i<sizeof(board[0]);i++)
    {
        for(int j=0;j<sizeof(board[0]);j++)
        {
            cout << "[ "<<board[i][j]<<" ]";
        }
        cout << "\n";
    }
}

void TicTacToe::placeX(int pos)
{
    if (pos==1)
    {
        this->board[0][0]='X';
    }
    if (pos==2)
    {
        this->board[0][1]='X';       
    }
    if (pos==3)
    {
        this->board[0][2]='X';        
    }
    if (pos==4)
    {
        this->board[1][0]='X';       
    }
    if (pos==5)
    {
        this->board[1][1]='X';      
    }
    if (pos==6)
    {
        this->board[1][2]='X';     
    }
    if (pos==7)
    {
        this->board[2][0]='X';      
    }
    if (pos==8)
    {
        this->board[2][1]='X';      
    }
    if (pos==9)
    {
        this->board[2][2]='X';     
    }

}

void TicTacToe::placeO(int pos)
{
    if (pos==1)
    {
        this->board[0][0]='O';
    }
    if (pos==2)
    {
        this->board[0][1]='O';       
    }
    if (pos==3)
    {
        this->board[0][2]='O';        
    }
    if (pos==4)
    {
        this->board[1][0]='O';       
    }
    if (pos==5)
    {
        this->board[1][1]='O';      
    }
    if (pos==6)
    {
        this->board[1][2]='O';     
    }
    if (pos==7)
    {
        this->board[2][0]='O';      
    }
    if (pos==8)
    {
        this->board[2][1]='O';      
    }
    if (pos==9)
    {
        this->board[2][2]='O';     
    }
}


void TicTacToe::play()
{
    int freePositions=9;
    int move;
    


    
    if(this->firstplayer=='X' || this->firstplayer=='x')
    {
        while(1)
        { 
            int lock=1;

            while(lock==1)
            {
                cout <<"X Please Enter Move(1-9):"<<endl;
                cin >> move; 
                move--;
                
                if (this->moves[move-1]==false)
                {
                    this->placeX(move);
                    this->printBoard();
                    freePositions--;
                    this->moves[move-1]=true;
       
                    lock=0;

                }
                else
                {
                    cout<<"Can't Place Here"<<endl;
                }
                if(freePositions==0)
                {
                    cout <<"Game Over(Tie Game) :"<<endl;
                    break;
                }

            }

            lock=1;

            while(lock==1)
            {
                cout <<"O Please Enter Move(1-9):"<<endl;
                cin >> move; 
                cout<< this->moves[move-1]<<endl;
                if (this->moves[move-1]==false)
                {
                    this->placeO(move);
                    this->printBoard();
                    freePositions--;
                    this->moves[move-1]=true;
              
                    lock=0;
                }
                else
                {
                    cout<<"Can't Place Here"<<endl;
                }

                if(freePositions==0)
                {
                    cout <<"Game Over(Tie Game) :"<<endl;
                    break;
                }

            }


        }
    }


    if(this->firstplayer=='O' || this->firstplayer=='o')
    {
        while(1)
        { 
            int lock=1;

            while(lock==1)
            {
                cout <<"O Please Enter Move(1-9):"<<endl;
                cin >> move; 
                cout<< this->moves[move-1]<<endl;
                if (this->moves[move-1]==false)
                {
                    this->placeO(move);
                    this->printBoard();
                    freePositions--;
                    this->moves[move-1]=true;
  
                    lock=0;

                }
                else
                {
                    cout<<"Can't Place Here"<<endl;
                }
                if(freePositions==0)
                {
                    cout <<"Game Over(Tie Game) :"<<endl;
                    break;
                }

            }

            lock=1;

            while(lock==1)
            {
                cout <<"X Please Enter Move(1-9):"<<endl;
                cin >> move; 
                cout<< this->moves[move-1]<<endl;
                if (this->moves[move-1]==false)
                {
                    this->placeX(move);
                    this->printBoard();
                    freePositions--;
                    this->moves[move-1]=true;
              
                    lock=0;
                }
                else
                {
                    cout<<"Can't Place Here"<<endl;
                }

                if(freePositions==0)
                {
                    cout <<"Game Over(Tie Game) :"<<endl;
                    break;
                }

            }


        }
    }
}
    



int main()
{
    char player;
    cout <<"Please Enter First Move Player: (O or X)"<<endl;
    cin >> player;
    TicTacToe game(player);

    game.printBoard();
    game.play();
   
}