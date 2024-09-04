#include <iostream>
using namespace std;

/*
int main(){
    int num1, num2;
    cout<< "Enter a number: ";
    cin>> num; 
    if(num%2 ==0 ){
        cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;
    }
    return 0;
}*/

int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;

    int whilesum =0, whileCount =1;
    while(whileCount<= n){
        whileSum+= whileCount;
        whileCount++;
    }
    cout<<"Sum using while loop: " <<whileSum <<endl;
    int forSum =0;
    for(int i =1; i<=n; i++){
        forSum +=i;
    }
    cout<<"Sum using for loop: "<< forSum<< endl;
    return 0;
}