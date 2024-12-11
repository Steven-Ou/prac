#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a placement is valid
bool isSafe(int* q, int c) {
    for (int i = 0; i < c; i++) {
        if (q[i] == q[c] || abs(q[c] - q[i]) == c - i) {
            return false; // Conflict detected
        }
    }
    return true; // No conflict
}

// Iterative method to solve N-Queens
void solveNQueens(int n) {
    int* q = new int[n]; // Array to store queen positions
    int solCount = 0;    // Count of solutions
    int c = 0;           // Current column index
    for (int i = 0; i < n; i++) q[i] = -1; // Initialize all positions to -1

    while (c >= 0) {
        q[c]++; // Move to the next row in the current column

        if (q[c] == n) { 
            // If we've tried all rows in this column
            q[c] = -1; // Reset column and backtrack
            c--;       // Move back to the previous column
        } 
        else if (isSafe(q, c)) {
            // If the placement is valid
            if (c == n - 1) {
                // If all queens are placed
                solCount++;
            } else {
                // Move to the next column
                c++;
            }
        }
    }

    cout << "There are " << solCount << " solutions to the " << n << " queens problem" << endl;
    delete[] q; // Clean up memory
}

int main() {
    int n;
    cout << "How many queens? ";
    cin >> n;

    while (n < 1) {
        cout << "Invalid input! Try again: ";
        cin >> n;
    }

    for (int i = 1; i <= n; i++) {
        solveNQueens(i); // Solve for each board size from 1 to n
    }

    return 0;
}
