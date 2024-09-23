#include <iostream>

using namespace std;

int main()
{
   // Initialize the board to 0
   // Start in the 1st row, 1st column, and place a queen there
   int q[8][8]={0};
   int r =0, c =0;
   q[r][c]=1;

nextCol:
   // Move to the next column
   // IF you have passed the last column goto print;
   // Move to one before the first row
   c++;
   if(c==8){
      goto print;
   }
   r=-1;
nextRow:
   // Move to the next row
      r++;
   // If have passed the end of the column goto backtrack;
      if(r==8){
         goto backtrack;
      }
   // If there is a queen in the same row (to the left), goto nextRow
      for(int i=0;i<c;i++){
         if(q[r][i]==1)
            goto nextRow;
      }
   // If there is a queen in the upper-left diagonal, goto nextRow
      for(int i=1; r-i>-1 && c-i >-1;i++ ){
         if(b[r-i][c-i]==1){
            goto nextRow;
         }
      }   
   // If there is a queen in the lower-left diagonal, goto nextRow
      for(int i=1; r+i<8 && c-i>-1;i++){
         if(b[r+i][c-i]==1){
            goto nextRow; 
         }
      }
   // Place a queen in the current square (2D version only)
      b[r][c] ==1;
   // goto nextCol;
      goto nextCol; 
backtrack:
   // Move to the previous column
   c--;
   
   // If you have moved to the left of the chessboard exit the program
   // Find the square in the column with a queen in it and set r to the row number of that square
   // Remove the queen from the current square
   // goto nextRow;

print:
   // Print the solution number
   // Use a nested loop to print the chessboard
   // goto backtrack;
   for(int i=0; i<8;i++){
      for(int j=0; j<8; j++){
         cout<<q[i][j];
      }
      cout<<endl;
   }
      goto backtrack;
   return 0;
}
