#include <iostream>
#include <vector>
using namespace std;

int N;  // size of board

// Function to print the solution matrix
void printSolution(vector<vector<int>> &board) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

// Check if a queen can be placed at board[row][col]
bool isSafe(vector<vector<int>> &board, int row, int col) {
    // Check column
    for (int i = 0; i < row; i++)
        if (board[i][col])
            return false;

    // Check upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    // Check upper-right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++)
        if (board[i][j])
            return false;

    return true;
}

// Solve N-Queens recursively
bool solveNQueen(vector<vector<int>> &board, int row) {
    // Base case: all queens placed
    if (row == N) {
        printSolution(board);
        return true;
    }

    // Try placing queen in each column of this row
    for (int col = 0; col < N; col++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 1;  // Place queen
            solveNQueen(board, row + 1);
            board[row][col] = 0;  // Backtrack
        }
    }
    return false;
}

int main() {
    cout << "Enter the size of the board (N): ";
    cin >> N;

    vector<vector<int>> board(N, vector<int>(N, 0));

    int firstCol;
    cout << "Enter column (0-" << N - 1 << ") where first Queen is placed in row 0: ";
    cin >> firstCol;

    // Place first Queen manually
    board[0][firstCol] = 1;

    cout << "\nSolving N-Queens with first queen fixed at (0, " << firstCol << "):\n";
    solveNQueen(board, 1);  // Start solving from 2nd row
    return 0;
}
