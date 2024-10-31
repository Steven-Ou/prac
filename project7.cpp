//Fancy 8 queen with goto
#include <iostream>
using namespace std;
int shu=0; //Global count variable
typedef char box[5][7];
box bb, wb, *board[8][8];
print:
    for(int i=0;i<8;i++){
        for(int j=0; j<8;j++){
            if((i+j)%2==0){
                board[i][j] = &bq;
            }
        }
    }
    cout<< "Solution #: "<< ++shu<<endl; //printing out the number of solution
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
