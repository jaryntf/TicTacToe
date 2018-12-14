#include <iostream>
#include "TicTacToe.h"
#include <ctime>
#include <cstdlib>

using namespace std;


string strArray[9]; // global array to store game board
// variables outside of function allow all functions to use them if needed.

    bool a1check; // checks if a position has been used so that it wont be overwrritten by player or computer no cheating
    bool a2check;
    bool a3check;
    bool b1check;
    bool b2check;
    bool b3check;
    bool c1check;
    bool c2check;
    bool c3check;


void updateBoard(string player,string computer,int start){ // takes in parameters of position player/computer wants

    int gamestart = start; // prevents board reset




    if(gamestart == 0){ // sets the board at the beginning by filling each array
        for(int x = 0; x < 9;x++){
            if(x == 0){
            saveBoard(0,"||A1|");

            }
            if(x == 1){
            saveBoard(1,"|B1|");

            }
            if(x == 2){
            saveBoard(2,"|C1||");

            }
            if(x == 3){
            saveBoard(3,"||A2|");

            }
            if(x == 4){
            saveBoard(4,"|B2|");

            }
            if(x == 5){
            saveBoard(5,"|C2||");

            }
            if(x == 6){
            saveBoard(6,"||A3|");

            }
            if(x == 7){
            saveBoard(7,"|B3|");

            }
            if(x == 8){
            saveBoard(8,"|C3||");

            }


        }

        a1check = false; // tells game that no position has been used after board is set
        a2check = false;
        a3check = false;
        b1check = false;
        b2check = false;
        b3check = false;
        c1check = false;
        c2check = false;
        c3check = false;



        }
        // the code repeats itself so the explanation will be here
        //else - after game is set the looop will start here
    else{
        if(computer == "none"){ // "none" is the parameter sent by the opposite player since this is for the player turn computer is set to none
            if(player == "A1" || player == "a1"){ // checks for both spellings of position
                if(a1check == false){ // checks if place has been used
                /////code here
                saveBoard(0,"||X |"); // sends choice to function that changes board and leaves marker for player = X


                a1check = true; // position has now been used
                }
                else{
                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        if(computer == "none"){
            if(player == "A2" || player == "a2"){
                if(a2check == false){
                /////code here
                saveBoard(3,"||X |");


                a2check = true;
                }
                else{
                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        if(computer == "none"){
            if(player == "A3" || player == "a3"){
                if(a3check == false){
                /////code here
                saveBoard(6,"||X |");


                a3check = true;
                }
                else{

                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        ////
        if(computer == "none"){
            if(player == "B1" || player == "b1"){
                if(b1check == false){
                /////code here
                saveBoard(1,"|X |");


                b1check = true;
                }
                else{

                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        if(computer == "none"){
            if(player == "B2" || player == "b2"){
                if(b2check == false){
                /////code here
                saveBoard(4,"|X |");


                b2check = true;
                }
                else{

                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        if(computer == "none"){
            if(player == "B3" || player == "b3"){
                if(b3check == false){
                /////code here
                saveBoard(7,"|X |");


                b3check = true;
                }
                else{

                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        ////
        if(computer == "none"){
            if(player == "C1" || player == "c1"){
                if(c1check == false){
                /////code here
                saveBoard(2,"| X||");


                c1check = true;
                }
                else{

                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        if(computer == "none"){
            if(player == "C2" || player == "c2"){
                if(c2check == false){
                /////code here
                saveBoard(5,"| X||");


                c2check = true;
                }
                else{

                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        if(computer == "none"){
            if(player == "C3" || player == "c3"){
                if(c3check == false){
                /////code here
                saveBoard(8,"| X||");


                c3check = true;
                }
                else{

                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        /////
        //COMPUTER CHOICE CODE
        ///// :)

        if(player == "none"){
            if(computer == "A1"){
                if(a1check == false){
                /////code here
                saveBoard(0,"||O |");


                a1check = true;
                }
                else{

                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        if(player == "none"){
            if(computer== "A2"){
                if(a2check == false){
                /////code here
                saveBoard(3,"||O |");


                a2check = true;
                }
                else{

                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        if(player == "none"){
            if(computer == "A3"){
                if(a3check == false){
                /////code here
                saveBoard(6,"||O |");


                a3check = true;
                }
                else{

                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        ////
        if(player == "none"){
            if(computer == "B1"){
                if(b1check == false){
                /////code here
                saveBoard(1,"|O |");


                b1check = true;
                }
                else{

                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        if(player == "none"){
            if(computer == "B2"){
                if(b2check == false){
                /////code here
                saveBoard(4,"|O |");


                b2check = true;
                }
                else{

                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        if(player == "none"){
            if(computer == "B3"){
                if(b3check == false){
                /////code here
                saveBoard(7,"|O |");


                b3check = true;
                }
                else{

               cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        ////
        if(player == "none"){
            if(computer == "C1"){
                if(c1check == false){
                /////code here
                saveBoard(2,"| O||");


                c1check = true;
                }
                else{

                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        if(player == "none"){
            if(computer == "C2"){
                if(c2check == false){
                /////code here
                saveBoard(5,"| O||");


                c2check = true;
                }
                else{

                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }
        if(player == "none"){
            if(computer == "C3"){
                if(c3check == false){
                /////code here
                saveBoard(8,"| O||");


                c3check = true;
                }
                else{

                cout << "Error: Position already used Turn Lost.";
                /// decided to let people know why they cant move if check fails
                }
            }
        }




    }



gamestart = 1;
}

void playerTurn(){
    string playerChoice = "";

    cout << "Enter position: ";

    cin >> playerChoice;
    updateBoard(playerChoice,"none",1);




}
void saveBoard(int x, string y){


        strArray[x] = y;
        cout << endl;
        cout << strArray[0];cout << strArray[1];cout << strArray[2] << endl;
        cout << strArray[3];cout << strArray[4];cout << strArray[5] << endl;
        cout << strArray[6];cout << strArray[7];cout << strArray[8] << endl;
        cout << endl;
}
void computerTurn(){

    int numMax = 9;
    int randomNum;
    string compChoice;

    srand(time(0));
    randomNum = (rand () % numMax) + 1;

    if(randomNum == 1){
        compChoice = "A1";
    }
    if(randomNum == 2){
        compChoice = "A2";
    }
    if(randomNum == 3){
        compChoice = "A3";
    }
    if(randomNum == 4){
        compChoice = "B1";
    }
    if(randomNum == 5){
        compChoice = "B2";
    }
    if(randomNum == 6){
        compChoice = "B3";
    }
    if(randomNum == 7){
        compChoice = "C1";
    }
    if(randomNum == 8){
        compChoice = "C2";
    }
    if(randomNum == 9){
        compChoice = "C3";
    }

    updateBoard("none",compChoice,1);



}
int checkBoard(){

    // row wins

    if(strArray[0] == "||X |" && strArray[1] == "|X |" && strArray[2] == "| X||" ){
        cout << "Player Wins Tic Tac Toe!";
        return 1;
    }
    if(strArray[3] == "||X |" && strArray[4] == "|X |" && strArray[5] == "| X||" ){
        cout << "Player Wins Tic Tac Toe!";
        return 1;
    }
    if(strArray[6] == "||X |" && strArray[7] == "|X |" && strArray[8] == "| X||" ){
        cout << "Player Wins Tic Tac Toe!";
        return 1;
    }
    //computer wins
    if(strArray[0] == "||O |" && strArray[1] == "|O |" && strArray[2] == "| O||" ){
        cout << "Computer Wins Tic Tac Toe!";
        return 1;
    }
    if(strArray[3] == "||O |" && strArray[4] == "|O |" && strArray[5] == "| O||" ){
        cout << "Computer Wins Tic Tac Toe!";
        return 1;
    }
    if(strArray[6] == "||O |" && strArray[7] == "|O |" && strArray[8] == "| O||" ){
        cout << "Computer Wins Tic Tac Toe!";
        return 1;
    }

    ///column wins

    if(strArray[0] == "||X |" && strArray[3] == "||X |" && strArray[6] == "||X |" ){
        cout << "Player Wins Tic Tac Toe!";
        return 1;
    }
    if(strArray[1] == "|X |" && strArray[4] == "|X |" && strArray[7] == "|X |" ){
        cout << "Player Wins Tic Tac Toe!";
        return 1;
    }
    if(strArray[2] == "| X||" && strArray[5] == "| X||" && strArray[8] == "| X||" ){
        cout << "Player Wins Tic Tac Toe!";
        return 1;
    }

    //computer wins
    if(strArray[0] == "||O |" && strArray[3] == "||O |" && strArray[6] == "||O |" ){
        cout << "Computer Wins Tic Tac Toe!";
        return 1;
    }
    if(strArray[1] == "|O |" && strArray[4] == "|O |" && strArray[7] == "|O |" ){
        cout << "Computer Wins Tic Tac Toe!";
        return 1;
    }
    if(strArray[2] == "| O||" && strArray[5] == "| O||" && strArray[8] == "| O||" ){
        cout << "Computer Wins Tic Tac Toe!";
        return 1;
    }

    //diagonal wins

    if(strArray[0] == "||X |" && strArray[4] == "|X |" && strArray[8] == "| X||" ){
        cout << "Player Wins Tic Tac Toe!";
        return 1;
    }
    if(strArray[6] == "||X |" && strArray[4] == "|X |" && strArray[2] == "| X||" ){
        cout << "Player Wins Tic Tac Toe!";
        return 1;
    }
    //computer wins

    if(strArray[0] == "||O |" && strArray[4] == "|O |" && strArray[8] == "| O||" ){
        cout << "Computer Wins Tic Tac Toe!";
        return 1;
    }
    if(strArray[6] == "||O |" && strArray[4] == "|O |" && strArray[2] == "| O||" ){
        cout << "Computer Wins Tic Tac Toe!";
        return 1;
    }


return 0;
}
