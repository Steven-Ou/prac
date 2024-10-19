//Queens without goto
#include <iostream>
using namespace std; 

int ct =0; //counting variable in the universe.
//Ok function is used to check if placing a queen in column is valid.
bool ok(int q[], int c){
    for(int i=0;i<c;i++){//Loop through to check if the queens have conflicts.
       //Check if the queens are in column and is in the same row
       if(q[c]==q[i]||c-i==abs(q[c]-q[i])){//Also checks if they are on the same diagonal.
            return false;
       } 
    }
    return true;
}
//Print the board and the number of solutions
void print(int q[]){
    cout<<"Solution"<<++ct << ": \n";//Print the solution number
    //Print the positions of queens in each column. 
    for(int i=0;i<8;i++){
        cout<<q[i]<<" | ";//Row number where the queens is placed for each column.
    }
    cout<<endl;
    //printing out the 8x8 board
    for(int i=0;i<8;i++){

    }
}   