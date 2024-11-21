//Tower of Hanoi
#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Declaring an array of 3 vectors to represents each tower
    vector <int> tower[3];
    int from =0;
    int to =1; 
    int candit =1;
    int move =0;
    int n; //Ring
    cout<< "Enter an odd number of rings: ";
    cin >> n; 
    //Checking if its even or negative
    while(n<1){
        cout<< "Invalid input! Try again: ";
        cin>> n; //Asking the user for the numbers
    }
    if(n%2==1){
        to =1;
    }else{
        to =2;
    }
        
    //Filling in the rings, with the smallest on top and the largest on the bottom
    for(int i=n+1; i>0; i-- ){
        tower[0].push_back(i);
    }
    //setting a placeholder for each tower
    tower[1].push_back(n+1);
    tower[2].push_back(n+1);

    while(tower[1].size()<n+1){
        cout<< "Move "<< ++move<< ": Transfer Ring "<< candit<< " from Tower "
        << char(from+ 'A')<<" to Tower "<< char(to+'A')<<endl;

        tower[to].push_back(candit);
        tower[from].pop_back();

        if(n%2 == 1){
            if(tower[(to+1)%3].back()< tower[(to+2)%3].back()){
                from = (to+1)%3;
            }else{
                from = (to+2)%3;
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
}