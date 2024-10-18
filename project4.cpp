//Eight number in a cross
#include <iostream>
using namespace std;

int shu =0; //used for counting the number of solution
int adj[8][5]={//This is used to represent a position of each index. 
    {-1},//end of each row.
    {0,-1},
    {0,-1},
    {0,1,2,-1},
    {0,1,3,-1},
    {1,4,-1},
    {2,3,4,-1},
    {3,4,5,6,-1},
};

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
    return true;//if no conditions are violated, it's true!
}

void print(int cross[], int cap){
  
    cout<<"Solution "<<++shu<<": "<<endl;// For every solution found, it will print out the name of the solution.
    //Loops through the positions and print them in a specific arrangement
    for(int i=0;i<8;i++){
        if(i==0||i==6){     //conditions are used to print the position in a specific format: 
            cout<<" "<<cross[i];
        }else if(i==1||i==5){ 
            cout<<cross[i]<<endl;
        }else{
            cout<<cross[i];
        }
        cout<<endl;
        return; 
    }
}
int main(){

   return 0; 
}