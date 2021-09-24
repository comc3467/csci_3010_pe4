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



void PlaceMarker(char** & Board, int c, int r){
    Board[c][r] = '@';
    DisplayBoard(Board);
}

int main(){
    char** board_ = CreateBoard();
    DisplayBoard(board_);
    int* return_array = GetPlayerChoice(); //so return_array[0] is the row, return_array[1] is the column
    //std::cout << return_array[1];

    //free(board_);
}