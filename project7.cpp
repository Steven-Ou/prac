//Fancy 8 queen with goto
#include <iostream>
using namespace std;
int shu=0; //Global count variable
typedef char box[5][7];
box bb, wb, bq,wq,*board[8][8];
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            bb[i][j]=char(219); //"\u25A0"
            wb[i][j]= ' '; //"\u25A1"
            if(j==0 || j==6){
                bq[i][j]= ' ';
                wq[i][j]= char(219);
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
    r=-1;//moving to one before the first row
nextRow:
backtrack:
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
    for(int i=0;i<8;i++){ //for each board row
        for(int k=0; k<5;k++){//for each box row 
            cout<<char(179);
            for(int j=0; j<8;j++){//each board column
                for(int l=0;l<7;l++){//each box column
                    cout<<(*board[i][j])[k][l];
                }
            }
            cout<<char(179)<<endl;
        }    

    }
    goto backtrack; // going to backtrack
}
