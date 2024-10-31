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
            }
        }
    }
    int p[8][8]={0};
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
