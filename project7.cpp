#include <iostream> // Include iostream for input and output
using namespace std; // Use standard namespace to avoid typing std::

int shu=0; // Global count variable to track number of solutions found

typedef string box[5][7]; // Define a box as a 5x7 character array to represent the board and queen squares
box bb, wb, bq, wq, *board[8][8]; // Declare black and white boxes and queens, and the 8x8 board

int main(){ // Main function
    for(int i=0;i<5;i++){ // Loop through rows of the box pattern
        for(int j=0;j<7;j++){ // Loop through columns of the box pattern
            bb[i][j]= "\u2588"; // Fill black box with 'white'
            wb[i][j]= " "; // Fill white box with a space
            if(j==0 || j==6){ // Check if on the border columns for the queen box
                bq[i][j]= " "; // Set black queen border to spaces
                wq[i][j]= "\u2588"; // Set white queen border to 'white'
            }else if(i==0||i==4){ // Check if on the border rows for the queen box
                bq[i][j]= " "; // Set black queen border rows to spaces
                wq[i][j]= "\u2588"; // Set white queen border rows to 'white'
            }else if(i==1){ // Check for the middle section of the queen box
                if(j%2==0){ // Alternate pattern for middle section
                    bq[i][j]= " "; // Set even columns to spaces for black queen
                    wq[i][j]= "\u2588"; // Set even columns to 'white' for white queen
                }else{ // Alternate pattern
                    bq[i][j]= "\u2588"; // Set odd columns to 'white' for black queen
                    wq[i][j]= " "; // Set odd columns to spaces for white queen
                }
            }else{ // Middle rows for black queen
                bq[i][j]="\u2588"; // Set black queen middle to 'white'
                wq[i][j]= " "; // Set white queen middle to spaces
            }
        }
    }

    int p[8][8]={0}; // Initialize the board positions with 0s (no queens)
    int r=0, c=0; // Start at the first row, first column
    p[r][c]=1; // Place a queen at the starting position

nextCol: // Label for moving to the next column
    c++; // Move to the next column
    if(c==8){ // Check if reached the last column
        goto print; // If so, go to print the solution
    }
    r=-1; // Reset row to -1 before moving to the next row

nextRow: // Label for moving to the next row
    r++; // Move to the next row
    if(r==8){ // Check if row is out of bounds
        goto backtrack; // If so, go to backtrack
    }

    for(int i=0;i<c;i++){ // Loop through columns in the row
        if(p[r][i]==1){ // Check if there's a queen in the row
            goto nextRow; // If so, move to the next row
        }
    }

    for(int i=1;r-i>-1 && c-i>-1;i++){ // Check upper left diagonal
        if(p[r-i][c-i]==1){ // If a queen is found in the upper left diagonal
            goto nextRow; // Move to the next row
        }
    }

    for(int i=1;r+i<8 && c-i>-1;i++){ // Check lower left diagonal
        if(p[r+i][c-i]==1){ // If a queen is found in the lower left diagonal
            goto nextRow; // Move to the next row
        }
    }

    p[r][c]=1; // Place a queen in the current square
    goto nextCol; // Move to the next column

backtrack: // Label for backtracking
    c--; // Move to the previous column
    if(c==-1){ // Check if moved out of bounds on the left
        return 0; // End the program if so
    }

    r=0; // Start at the top row
    while(p[r][c]!=1){ // Find the queen in the current column
        r++; // Move down a row
    }
    p[r][c]=0; // Remove the queen from the current square
    goto nextRow; // Move to the next row

print: // Label for printing the board
    for(int i=0;i<8;i++){ // Loop through each row
        for(int j=0;j<8;j++){ // Loop through each column
            if((i+j)%2==0){ // Check if square is black or white
                if(p[i][j]==1){ // If there's a queen
                    board[i][j]=&bq; // Set black queen
                }else{
                    board[i][j]=&wb; // Set white square
                }
            }else{ 
                if(p[i][j]==1){ // If there's a queen
                    board[i][j]=&wq; // Set white queen
                }else{
                    board[i][j]=&bb; // Set black square
                }
            }
        }
    }

    cout << "Solution # " << ++shu << ":\n"; // Print the solution number
    cout <<"\u2581"; // Print the top border
    for(int col=0; col<8; col++){ // Loop through each column
        cout << "-------"; // Print dashes for each column width
        if(col<8){ 
        cout << "\u258F"; // Separator between columns
        }
    }
    cout << "\n"; // End the top border line

    for(int i=0;i<8;i++){ // Loop through each board row
        for(int k=0;k<5;k++){ // Loop through each box row
            cout << "|"; // Print left border
            for(int j=0;j<8;j++){ // Loop through each board column
                for(int l=0;l<7;l++){ // Loop through each box column
                    cout << (*board[i][j])[k][l]; // Print the board character
                }
                cout << "|"; // Print right border for each box
            }
            cout << "\n"; // Newline after each box row
        }

        if(i<7){ // Check if not the last row
            cout << "+-------+-------+-------+-------+-------+-------+-------+-------+\n"; // Print row separator
        }
    }

    cout << "+-------+-------+-------+-------+-------+-------+-------+-------+\n"; // Print bottom border
    goto backtrack; // Go to backtrack to find the next solution
}
