#include <iostream>
#include <string>
using namespace std;

const int BOARD_SIZE = 9;

// Function prototypes
void displayBoard(char board[]);

int main() {
    char board[BOARD_SIZE] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

    // Display initial board
    displayBoard(board);

    return 0;
}

// Function to display the tic-tac-toe board
void displayBoard(char board[]) {
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
    cout << "---+---+---" << endl;
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << "---+---+---" << endl;
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
}
