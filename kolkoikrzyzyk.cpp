#include <iostream>
using namespace std;

void showBoard(char board[3][3]);
void clearBoard(char board[3][3]);
bool isFinished(char board[3][3], char *winner);
bool isDraw(char board[3][3]);
bool setPoint(char board[3][3], unsigned int x, unsigned int y, char player);

int main() {
    char board[3][3];
    char winner = ' ';
    char currentPlayer = 'X';
    unsigned int x, y;

    clearBoard(board);

    while (true) {
        showBoard(board);

        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> x >> y;

        if (x >= 3 || y >= 3 || !setPoint(board, x, y, currentPlayer)) {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        if (isFinished(board, &winner)) {
            showBoard(board);
            cout << "Player " << winner << " wins!" << endl;
            break;
        }

        if (isDraw(board)) {
            showBoard(board);
            cout << "It's a draw!" << endl;
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}

void showBoard(char board[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout <<"| " <<  board[i][j] << " ";
        }
        cout << "|" <<  endl;
    }
}

void clearBoard(char board[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            board[i][j] = ' ';
        }
    } 
}

bool isFinished(char board[3][3], char *winner) {
    for (int i = 0; i < 3; i++){
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' '){
            *winner = board[i][0];
            return true;
        }
    }
    for (int i = 0; i < 3; i++){
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' '){
            *winner = board[0][i];
            return true;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' '){
        *winner = board[0][0];
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' '){
        *winner = board[0][2];
        return true;
    }
    return false;
}

bool isDraw(char board[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (board[i][j] == ' '){
                return false;
            }
        }
    }
    return true;
}

bool setPoint(char board[3][3], unsigned int x, unsigned int y, char player){
    if (board[x][y] == ' '){
        board[x][y] = player;
        return true;
    }
    return false;
}
