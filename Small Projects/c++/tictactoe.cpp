#include <iostream>
using namespace std;

    //Variables
    char tictactoe[3][3];
    const char playerTwo = 'O', playerOne = 'X';
    bool gameOn = true;
    
    //Functions
    void isPlayerWinner(int x, int y); 
    void isDraw();
    void playerO(int x, int y);
    void playerX(int x, int y);
    
    
int main()
{
    int row, col;
    
    //Showing the empty 2d array
    for(int i = 0; i < 3 ; ++i){
        for(int j = 0; j < 3 ; ++j){
            cout<<"| "<<tictactoe[i][j]<<" |";
        }
    cout<<"\n";
    }
    cout<<"\n";
    
    //Keeps iterating if gameOn is True, the game will end if it turns false
    while (gameOn == true){
        
    cout<<"Place X in row and column: ";
    cin>>row>>col;

    cout<<"\n";
    
    //Places 'X' in the array with the row and col inputs
    playerX(row, col);
    
    //Checks if theres 3 'X' matches horizontally, vertically or Diagonally
    isPlayerWinner(row, col);
    
    //Checks if the array is full and it will conclude a draw
    isDraw();
    
    //It will break out of the loop if 'X' won or if its a draw
    if (gameOn == false)
        break;
    
    cout<<"\n";
    
    cout<<"Place O in row and column: ";
    cin>>row>>col;
    
    cout<<"\n";
    
    //Places 'O' in the array with the row and col inputs
    playerO(row, col);
    
    //Checks if theres 3 'O' matches horizontally, vertically or Diagonally
    isPlayerWinner(row, col);
    
    //It will break out of the loop if 'O'
    if (gameOn == false)
        break;
    
    cout<<"\n";
    } 
    return 0;
}

void isPlayerWinner(int x, int y){
    //ref's value is the last move made in the game and it will check if it matches horizontally, vertically, or diagonally
     char ref = tictactoe[x-1][y-1];
     int i = 0;
     
            //Horizontal Conditions
         if (tictactoe[i][i] == ref && tictactoe[i][i+1] == ref && tictactoe[i][i+2] == ref) {
         cout<<"\nThe Winner is Player"<<ref<<"!";
         gameOn=false;
            } else if (tictactoe[i+1][i] == ref && tictactoe[i+1][i+1] == ref && tictactoe[i+1][i+2] == ref) {
         cout<<"\nThe Winner is Player"<<ref<<"!";
         gameOn=false;
            } else if (tictactoe[i+2][i] == ref && tictactoe[i+2][i+1] == ref && tictactoe[i+2][i+2] == ref) {
         cout<<"\nThe Winner is Player"<<ref<<"!";
         gameOn=false;
            }  //Vertical Conditions
                else if (tictactoe[i][i] == ref && tictactoe[i+1][i] == ref && tictactoe[i+2][i] == ref) {
         cout<<"\nThe Winner is Player"<<ref<<"!";
         gameOn=false;
            } else if (tictactoe[i][i+1] == ref && tictactoe[i+1][i+1] == ref && tictactoe[i+2][i+1] == ref) {
         cout<<"\nThe Winner is Player"<<ref<<"!";
         gameOn=false;
            } else if (tictactoe[i][i+2] == ref && tictactoe[i+1][i+2] == ref && tictactoe[i+2][i+2] == ref) {
         cout<<"\nThe Winner is Player"<<ref<<"!";
         gameOn=false;
            } //Diagonal Conditions
             else if (tictactoe[i][i] == ref && tictactoe[i+1][i+1] == ref && tictactoe[i+2][i+2] == ref) {
         cout<<"\nThe Winner is Player"<<ref<<"!";
         gameOn=false;
            } else if (tictactoe[i][i+2] == ref && tictactoe[i+1][i+1] == ref && tictactoe[i+2][i] == ref) {
         cout<<"\nThe Winner is Player"<<ref<<"!";
         gameOn=false;
            } 
    }    
    
void isDraw(){
    int filled = 0;
    
    //for counting the number of values filled in the array
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            if(tictactoe[i][j] == 'O' || tictactoe[i][j] == 'X')
                filled++;
        }
    }
    //it will conclude a draw if filled reaches 9 and theres no matches 
    if (filled == 9) {
        cout<<"\nIts a Draw!";
        gameOn = false;
    }
}

void playerO(int x, int y) {
    
    //Declaring 'X' in the array index
     for(int i = 0; i < x; ++i){
        for(int j = 0; j < y; ++j){
            if (i == j)
            tictactoe[x-1][y-1]=playerTwo;
        }
    }
    
    //Showing that declared index and the rest of the values in the array
    for(int i = 0; i < 3 ; ++i){
        for(int j = 0; j < 3 ; ++j){
            cout<<"| "<<tictactoe[i][j]<<" |";
        }
        cout<<"\n";
    }
}

void playerX(int x, int y){
     
     //Declaring 'O' in the array index
     for(int i = 0; i < x; ++i){
        for(int j = 0; j < y; ++j){
            if (i == j)
            tictactoe[x-1][y-1]=playerOne;
        }
    }

    //Showing that declared index and the rest of the values in the array
    for(int i = 0; i < 3 ; ++i){
        for(int j = 0; j < 3 ; ++j){
            cout<<"| "<<tictactoe[i][j]<<" |";
        }
        cout<<"\n";
    }
}