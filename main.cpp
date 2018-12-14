#include <iostream>
#include "TicTacToe.h"

using namespace std;

int main(){

    cout << "Welcome to Jaryns TicTacToe Game. Player inputs are X and computer inputs are O.First One to get three in a row wins." << endl; //Opening message

    int start = 0; // start variable goes into updateboard function and sets the board before game start. this is used so that it wont re set board midgame
    do{ // game loop starts here
     updateBoard("a","b",start); // placeholder paramters a = player move b = comp move

     playerTurn(); // player goes first

     checkBoard(); // checks after turn now :)

     if(checkBoard()==0){
        computerTurn(); // then computer moves
     }
     start++; // prevents reset of board


    }while(checkBoard()== 0); // checks game board after every loop


return 0;
}
