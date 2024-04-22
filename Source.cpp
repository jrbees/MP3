#include <iostream>
#include <string>

using namespace std;

const int BOARD_SIZE = 9;

// Function prototypes
int getPlayerInput(string playerName);
bool isLegalMove(char board[], int location);
void placeMarkOnBoard(char board[], char playerMark, int location);
void displayBoard(char board[]);

int main() {
    char board[BOARD_SIZE] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    string player1, player2;

    cout << "Enter player 1's name: ";
    cin >> player1;
    cout << "Enter player 2's name: ";
    cin >> player2;

    int player = 1; // Player 1 starts
    bool gameover = false;

    while (!gameover) {
        // Display the board
        displayBoard(board);

        // Get player's move
        int move = getPlayerInput((player == 1) ? player1 : player2);

        // Check if the move is legal
        while (!isLegalMove(board, move - 1)) {
            cout << "Invalid move. Please try again." << endl;
            move = getPlayerInput((player == 1) ? player1 : player2);
        }

        // Place the mark on the board
        char mark = (player == 1) ? 'X' : 'O';
        placeMarkOnBoard(board, mark, move - 1);

        // Check for win or tie
        // (Implementation of these checks will come later)

        // Switch players
        player = (player == 1) ? 2 : 1;
    }

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

// Function to get player input
int getPlayerInput(string playerName) {
    int move;
    cout << playerName << ", enter your move (1-9): ";
    cin >> move;
    return move;
}

// Function to check if the move is legal
bool isLegalMove(char board[], int location) {
    return (board[location] != 'X' && board[location] != 'O');
}

// Function to place the mark on the board
void placeMarkOnBoard(char board[], char playerMark, int location) {
    board[location] = playerMark;
}
