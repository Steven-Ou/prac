//last project
#include <iostream>
#include <cmath>
using namespace std; 
int counter = 0; 

bool okay(int*a, int b){
    for(int i=0;i<b;i++){
        if(*(a+i)==*(a+b) || b-i == abs(*(a+b)-*(a+i))){
            return false;
        }
    }
    return true;
}
void number(int*a, int b, int c){
    if(b == c){
        counter++;
        return; 
    }

    for(int i=0;i<c; i++){
        *(a+b)= i;
        if(okay(a,b)){
            number(a,b+1, c);
        }
    }
}
int main(){
    int a;
    cout<<"How many queens are there? :";
    cin>> a;
    while(a<1){
        cout<<"INVALID INPUT! Try again: ";
        cin>>a; 
    }
    
}
