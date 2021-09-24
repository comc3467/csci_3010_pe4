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

void DisplayBoard(char board[][3]){
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
    std::cout<<"c: "<< return_array[1] << " r: "<< return_array[0]<<std::endl;
    return return_array;
}




void PlaceMarker(char Board[][3], int c, int r, int turn){
    if(turn){
        Board[c][r] = 'O'; //O for one player, X for the other player
    }else{
        Board[c][r] = 'X';
    }
    //return true;
}

int main(){
    char** board_ = CreateBoard();

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout << board_[i][j];
        }
        std::cout << std::endl;
    }
    char arr[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arr[i][j] = board_[i][j];
        }
    } 
    int turn = 0;
    for(int i = 0; i < 9; i++){
        int* return_array = GetPlayerChoice();
        //std::cout << *return_array <<" "<< *(return_array+) << std::endl;
        std::cout << return_array[1] << " "<< return_array[0]  << std::endl;

       //PlaceMarker(arr, return_array[1], return_array[0], turn);
        DisplayBoard(arr);
        turn = 1 - turn; //take turn between 0 and 1
    } 

}