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
    while(n%2 == 0|| n<0){
        cout<< "Invalid input! Try again: ";
        cin>> n; //Asking the user for the numbers
    }
    //Filling in the rings, with the smallest on top and the largest on the bottom

}