//Eight number in a cross
#include <iostream>
using namespace std;
//helper array
int adj[8][5]={
    {-1},
    {0,-1},
    {0,-1},
    {0,1,2,-1},
    {0,1,3,-1},
    {1,4,-1},
    {2,3,4,-1},
    {3,4,5,6,-1}
};
int count =0; //count variable. 

bool ok(int cross[], int cap){
    for(int i=0;i<cap;i++){
        if( cross[i] == cross[cap]){//checking if the number
            return false;           //is on the same line
        }
    }
}
int main(){

   return 0; 
}