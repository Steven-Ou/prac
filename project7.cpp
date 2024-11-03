#include <iostream>
using namespace std;
int shu = 0; // Global count variable
typedef char box[5][7]; // Box is defined as a 5x7 char array to represent board and queen
box bb, wb, bq, wq, *board[8][8]; // Declare b/w boxes and queen images for the board

int main() {
    // Initialize the pattern for black/white queen square
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            bb[i][j] = '#'; // Black square
            wb[i][j] = ' '; // White square
            if (j == 0 || j == 6) {
                bq[i][j] = ' '; // Border for black queen
                wq[i][j] = '#';
            } else if (i == 0 || i == 4) {
                bq[i][j] = ' ';
                wq[i][j] = '#';
            } else if (i == 1) {
                if (j % 2 == 0) {
                    bq[i][j] = ' ';
                    wq[i][j] = '#';
                } else {
                    bq[i][j] = '#';
                    wq[i][j] = ' ';
                }
            } else {
                bq[i][j] = '#';
                wq[i][j] = ' ';
            }
        }
    }

    // Initialize the board to 0
    int p[8][8] = {0};

    // Start in the first row, first column, and place a queen there
    int r = 0, c = 0;
    p[r][c] = 1;

nextCol:
    // Move to the next column
    c++;
    // If you have passed the last column, goto print
    if (c == 8) {
        goto print;
    }

    // Reset row to -1 to start from the beginning in the next row loop
    r = -1;

nextRow:
    // Move to the next row
    r++;
    // If you passed the end of the column, backtrack
    if (r == 8) {
        goto backtrack;
    }

    // Check for a queen in the same row to the left
    for (int i = 0; i < c; i++) {
        if (p[r][i] == 1) {
            goto nextRow;
        }
    }

    // Check for a queen in the upper left diagonal
    for (int i = 1; r - i > -1 && c - i > -1; i++) {
        if (p[r - i][c - i] == 1) {
            goto nextRow;
        }
    }

    // Check for a queen in the lower left diagonal
    for (int i = 1; r + i < 8 && c - i > -1; i++) {
        if (p[r + i][c - i] == 1) {
            goto nextRow;
        }
    }

    // Place a queen in the current square
    p[r][c] = 1;
    goto nextCol;

backtrack:
    // Move to the previous column
    c--;
    if (c == -1) return 0;

    // Find the square in the column with a queen and set `r` to its row number
    r = 0;
    while (p[r][c] != 1) {
        r++;
    }

    // Remove the queen from the current square
    p[r][c] = 0;
    goto nextRow;

print:
    // Set up the board with appropriate squares and queens
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                board[i][j] = (p[i][j] == 1) ? &bq : &wb;
            } else {
                board[i][j] = (p[i][j] == 1) ? &wq : &bb;
            }
        }
    }

    cout << "Solution # " << ++shu << ":\n";

    // Print the top border
    cout << " ┌";
    for (int col = 0; col < 8; col++) {
        cout << "───────";
        if (col < 7) cout << "┬";
    }
    cout << "┐\n";

    // Print each row with side borders
    for (int i = 0; i < 8; i++) { // For each board row
        for (int k = 0; k < 5; k++) { // For each box row
            cout << "│"; // Left border for each row
            for (int j = 0; j < 8; j++) { // Each board column
                for (int l = 0; l < 7; l++) { // Each box column
                    cout << (*board[i][j])[k][l];
                }
                cout << "│"; // Right border for each square
            }
            cout << "\n";
        }
        if (i < 7) {
            cout << "├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤\n";
        }
    }

    // Bottom border of the board
    cout << "└───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┘\n";
    goto backtrack;
}
