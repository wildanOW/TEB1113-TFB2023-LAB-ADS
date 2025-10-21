#include <iostream>
using namespace std;

bool checkWin(char board[3][3], char c) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == c && board[i][1] == c && board[i][2] == c)
            return true;
        if (board[0][i] == c && board[1][i] == c && board[2][i] == c)
            return true;
    }
    if (board[0][0] == c && board[1][1] == c && board[2][2] == c)
        return true;
    if (board[0][2] == c && board[1][1] == c && board[2][0] == c)
        return true;

    return false;
}

int main() {
    char board[3][3];
    cout << "Enter 3x3 Tic-Tac-Toe board (X, O, .):\n";

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> board[i][j];

    int xCount = 0, oCount = 0;
    
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == 'X') xCount++;
            else if (board[i][j] == 'O') oCount++;
        }

    bool xWin = checkWin(board, 'X');
    bool oWin = checkWin(board, 'O');

    bool valid = true;

    if (!(xCount == oCount || xCount == oCount + 1))
        valid = false;

    if (xWin && oWin)
        valid = false;

    if (xWin && xCount != oCount + 1)
        valid = false;

    if (oWin && xCount != oCount)
        valid = false;

    if (valid)
        cout << "Valid state\n";
    else
        cout << "Invalid state\n";

    return 0;
}