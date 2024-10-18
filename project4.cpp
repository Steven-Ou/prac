//Eight number in a cross
#include <iostream>
using namespace std;
//helper array
int adj[8][5]={//This is used to represent a position of each index. 
    {-1},//end of each row.
    {0,-1},
    {0,-1},
    {0,1,2,-1},
    {0,1,3,-1},
    {1,4,-1},
    {2,3,4,-1},
    {3,4,5,6,-1}
};
int count =0; //used for counting the number of solution

bool ok(int cross[], int cap){
    for(int i=0;i<cap;i++){
        if( cross[i] == cross[cap]){//checking if the number repeats
            return false;           
        }
    }
    for(int j=0; adj[cap][j] !=-1; j++){    //Looks through all adjacent positions of 'cap'
        if(abs(cross[cap]-cross[adj[cap][j]])==1){// if adjacent numbers differ by 1, its false
            return false; 
        }
    }
    return true;
}
int main(){

   return 0; 
}