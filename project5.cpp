//Queens without goto
#include <iostream>
using namespace std; 

int count =0; //counting variable in the universe.
//Ok function is used to check if placing a queen in column is valid.
bool ok(int b[], int c){
    for(int i=0;i<c;i++){//Loop through to check if the queens have conflicts.
       //Check if the queens are in column and is in the same row
       if(b[c]==b[i]||c-i==abs(b[c]-b[i])){//Also checks if they are on the same diagonal.
            return false;
       } 
    }
    return true;
}
//Print the board and the number of solutions
void print