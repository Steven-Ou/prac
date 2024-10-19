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
        for(int c=0;c<8;c++){
            if(q[c]==i){//If there's a queen in this row and column.
                cout<<"1";//Print '1' for queen.
            }else{
                cout<<"0";//for empty spaces.
            }
        }
        cout<<endl;//Next row.
    }
    cout<<endl;//Create a new line after the entire board. 
}   
int main(){
    int q[8]; //Array to store the row and position of queens for each column.
    int c=0; // Start the first column.
    q[c]=0; //Place the first queen at row 0 and column 0.
}