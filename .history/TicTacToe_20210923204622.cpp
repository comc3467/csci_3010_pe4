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


int* GetPlayerChoice(){ //returns a pointer to an array of choices, row and column in the 0th and 1st indices
    std::cout << "Please enter a coordinate to play. (Top left is 0,0 – Bottom right is 2,2" << std::endl;
    std::cout << "Enter row: ";
    int row = -1;
    std::cin >> row;
    std::cout  << "Enter column: ";
    int col = -1;
    std::cin >> col;
    int return_array[] = {row, col}; //basically a tuple
    return return_array;

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