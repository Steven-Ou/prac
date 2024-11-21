//Tower of Hanoi
#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Declaring an array of 3 vectors to represents each tower
    vector <int> tower[3];
    int from =0;// set to 0 to start at tower A
    int to =1; //set to 1 so it can move to the next destination tower B.
    int candit =1;//the current ring being moved
    int move =0;//To track the number it takes for the ring to move.
    int n; //The number of rings provided by the user
    //Asking the user for the number of rings with prompt
    cout<< "Enter an odd or even number of rings: ";
    cin >> n; 
    //Checking if its even or negative
    while(n<1){
        cout<< "Invalid input! Try again: ";
        cin>> n; //Asking the user for the numbers
    }
    if(n%2==1){//checks if the number of the rings are odd or even.
        to =1;// goes to tower B if its odd
    }else{
        to =2;// goes to tower C if its even
    }
        
    //Initializing the towers!
    for(int i=n+1; i>0; i-- ){//n+1 is used for comparison 
        tower[0].push_back(i);//Pushing all the rings into Tower A base on the sizes
    }
    //Forcing a rule onto the tower so it won't put larger rings on top of smaller rings.
    tower[1].push_back(n+1);//n+1 is used as a logic to ensure that any empty- 
    tower[2].push_back(n+1);//-tower can have rings placed on them
    //THE WHILE LOOP: Loops to move all rings until all rings  are on tower B
    while(tower[1].size()<n+1){
        //Prints out the current move
        cout<< "Move "<< ++move<< ": Transfer Ring "<< candit<< " from Tower "
        << char(from+ 'A')<<" to Tower "<< char(to+'A')<<endl;
        //^ converting tower indexes to character A B C 
        tower[to].push_back(candit);//moving the ring to destination tower
        tower[from].pop_back();//remove from the original place.

        if(n%2 == 1){//checks if the ring is odd:
            //choosing the next tower with the smallest top ring that is- 
            //-smaller than candit the candidates that was selected.
            if(tower[(to+1)%3].back()< tower[(to+2)%3].back()){
                from = (to+1)%3;//Choose the next tower.
            }else{
                from = (to+2)%3;//Choose the other side tower
            }
            candit = tower[from].back();
            if(candit < tower[(from+1)%3].back()){
                to=(from+1)%3;
            }else{
                to=(from+2)%3;
            }
        }else{
            if(tower[(to+2)%3].back()<tower[(to+1)%3].back()){
                from =(to+2)%3;
            }else{
                from =(to+1)%3;
            }
            candit = tower[from].back();
            if(candit<tower[(from+2)%3].back()){
                to=(from+2)%3;
            }else{
                to =(from+1)%3;
            }
        }
    }
    return 0;
}