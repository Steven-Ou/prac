//Fancy 8 queen with goto
#include <iostream>
using namespace std;
int shu=0; //Global count variable
typedef char box[5][7]; //Box is defined as a 5x7 char array to represent board and queen
box bb, wb, bq,wq,*board[8][8];//Declare b/w boxes and queen img for the board
int main(){
    //intialize the pattern for black/white queen square
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            bb[i][j]= '#'; //"\u25A0"(black)
            wb[i][j]= ' '; //"\u25A1"(white box)
            if(j==0 || j==6){
                bq[i][j]= ' ';//Border for black queen
                wq[i][j]= '#';
            }else if(i==0||i==4){
                bq[i][j]= ' ';
                wq[i][j]= char(219);
            }else if(i==1){
                if(j%2==0){
                    bq[i][j]= ' ';
                    wq[i][j]= char(219);  
                }else{
                    bq[i][j]= char(219);
                    wq[i][j]= ' ';
                }
            }else{
                bq[i][j]=char(219);
                wq[i][j]= ' '; 
            }
        }
    }
    //initialize the board to 0
        int p[8][8]={0};
    //Start in the first row, first column, and place a queen there 
        int r= 0,c=0; 
        p[r][c] = 1; 
nextCol:
    // Move to the next column
        c++;
    // If you have passed the last column goto print 
        if(c==8){
            goto print;
        }
    //moving to one before the first row
        r=-1;
nextRow:
    //Move to the next row
        r++;
    //If have passed the end of the column goto backtrack;
        if(r==8){
            goto backtrack;
        }
    //If there is a queen in the same row(to the left), goto nextRow
        for(int i =0; i<c;i++){
            if(p[r][i]==1){
                goto nextRow;
            } 
        }
    //If there is a queen in the upper left diagonal, goto NextRow
        for(int i=1;r-i>-1 &&c-i>-1;i++){
            if(p[r-i][c-i]==1){
                goto nextRow;
            }
        }
    //If there is a queen in the lower left diagonal, goto NextRow
        for(int i=1;r+i<8 && c-i>-1;i++){
            if(p[r+i][c-i]==1){
                goto nextRow;
            }
        }
    //Place a queen in the current square
        p[r][c]=1;
    //Goto nextCol
        goto nextCol;
backtrack:
    //Move to the previous column
        c--;
    //If the queen have moved to the left of the chessboard, exit.
        if(c==-1){
            return 0;
        }
    //Find the square in the column with a queen in it and set r to the row number of that square
        r=0;
        while(p[r][c]!=1){
            r++;
        }
    //Remove the queen from the current square
        p[r][c]=0;
    //goto nextRow
        goto nextRow;
print:
    for(int i=0;i<8;i++){
        for(int j=0; j<8;j++){
            if((i+j)%2==0){
                if(p[i][j]==1){
                    board[i][j] = &bq;
                }
                else{
                    board[i][j]=&wb;
                }
            }else{
                if(p[i][j]==1){
                    board[i][j]=&wq;
                }else{
                    board[i][j]=&bb;
                }  
            }
        }
    }
    cout<< "Solution # "<< ++shu<<": \n "; //printing out the number of solution
    //Printing the board
    //Top border of the board
   
    cout << "┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐\n";
   
    //Print each row with side borders
    for(int i=0;i<8;i++){ //for each board row
        for(int k=0; k<5;k++){//for each box row 
            cout<< "│"; //Left border for each row
            for(int j=0; j<8;j++){//each board column
                for(int l=0;l<7;l++){//each box column
                    cout<<(*board[i][j])[k][l];
                }
                cout<<"│"; //Right border for each square
            }
            cout<<endl;
        }    
        //Bottom border for each row, except the last row
        if (i < 7) {
            cout << "├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤\n";
        }
    }
    // Bottom border of the board
    cout << "└───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┘\n";

    goto backtrack; // going to backtrack to find next solution
}
