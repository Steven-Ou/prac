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

bool ok(int cross[], int cap){//This function is used to check if the loop is following the adjacency rules. 
    for(int i=0;i<cap;i++){//checking for duplicated values using a forloop.
        if( cross[i] == cross[cap]){//checking if it repeats. 
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

void print(int cross[], int cap){//This function is used to print all valid solution.
  
    cout<<"Solution "<<++shu<<": "<<endl;// For every solution found, it will print out the name of the solution.
    //Loops through the positions and print them in a specific arrangement
    for(int i=0;i<8;i++){
        if(i==0||i==6){     //conditions are used to check- 
            cout<<" "<<cross[i];//-print the position in a specific format:
        }else if(i==1||i==5){ 
            cout<<cross[i]<<endl;
        }else{
            cout<<cross[i];
        }
    }
    cout<<endl;
    return;//Returns the solution
    
}
void eightNumbers(int cross[],int cap){//This function does backtracking to generate and to test results.
    if(cap == 8){//If all 8 position are filled, print the solution
        print(cross,cap);
        return;
    }
    for(int i=1; i<9;i++){//placing all the number from 1 to 8.
        cross[cap]=i; //placing i's in position cap as the loops goes on.

        //check if the i's that was put into cap valid.
        if(ok(cross,cap)){
            cap++;//move to the next position 
            eightNumbers(cross,cap);//To recursively try the next positions.
            cap--;// Backtrack to try another number
        }
    }
    return;
}   
int main(){
    int ans[8];//This array holds the solution
    int a=0;// The starting index(position 0)
    eightNumbers(ans,a);// Begin the backtracking.
    return 0; //The end;
}