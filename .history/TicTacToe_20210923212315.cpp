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
            std::cout << board[c][r];
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
}




bool PlaceMarker(char **Board, int c, int r, int turn){
    if(Board[c][r] == '_'){
        return false;
    }else{
        if(turn){
            Board[c][r] = 'O'; //O for one player, X for the other player
        }else{
            Board[c][r] = 'X';
        }
        
    }
    return true;
}

int main(){
    char** board_ = CreateBoard();

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout << board_[i][j];
        }
        std::cout << std::endl;
    }
    int turn = 0;
    for(int i = 0; i < 9; i++){
        int* return_array = GetPlayerChoice();
        std::cout << *return_array << return_array[1] << std::endl;
        PlaceMarker(board_, return_array[1], return_array[0], turn);
        DisplayBoard(board_);
        turn = 1 - turn; //take turn between 0 and 1
    }

}