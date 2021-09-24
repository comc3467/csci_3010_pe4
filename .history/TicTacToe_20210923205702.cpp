#include <iostream>

char** CreateBoard(){
    char **board_ = new char*[3];
    for(int i = 0; i < 3; i++){
        board_[i] = new char[3];
        for(int j = 0; j < 3; j++){
            board_[i][j] = '_';
        }
    }
    return board_;
}

void DisplayBoard(char ** board){
    for(int  c = 0; c < 3; c++){
        for(int r = 0; r < 3; r++){
            std::cout << board[c][r] <<" ";
        }
        std::cout << std::endl;
    }
}



bool PlaceMarker(char** & Board, int c, int r, int turn){
    if(Board[c][r] == '_'){
        return false;
    }else{
        if(turn)
        Board[c][r] = 
    }
    DisplayBoard(Board);
}

int main(){
    char** board_ = CreateBoard();
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout << board_[i][j];
        }
        std::cout << std::endl;
    }
}