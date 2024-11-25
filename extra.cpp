//Extra Credit Assignment
#include <iostream>
using namespace std; 
int main(){
    int n; 
    cout<<"Enter a number: ";
    cin>>n;
    while(n<1){
        cout<<"Number can't be less than 1\n";
        cin>>n;
    }
    int** arr = new int *[n];
}