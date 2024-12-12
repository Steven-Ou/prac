//last project
#include <iostream>
#include <cmath>
using namespace std;
 //Counting the solution
int counter = 0; 

//Creating the checking function
bool okay(int*a, int b){
    for(int i=0;i<b;i++){//Loop to check if the condition is met
    //The condition is used to check if the condition is met
        if(*(a+i)==*(a+b) || b-i == abs(*(a+b)-*(a+i))){
            return false;//return false if its wrong
        }
    }
    return true;// return true since everything is checked correct
}
//Recursive function to check how many solutions base on the queens
void number(int*a, int b, int c){
    if(b == c){ // If all queens are placed successfully 
        counter++; //Increase the solution count
        return; 
    }
    //Iterate over all rows for the current column
    for(int i=0;i<c; i++){
        *(a+b)= i;//Place the queen at the row 'i' in column 'c'
        if(okay(a,b)){//check if the placement is valid
            number(a,b+1, c);//Recursively place the next queen
        }
    }
}
//MAIN
int main(){ 
    int a;
    //Prompting the user
    cout<<"How many queens are there? :";
    //Asking the user
    cin>> a;
    //Ensure the user enters a valid size
    while(a<1){//check
        //Check if the a is less than 1
        cout<<"INVALID INPUT! Try again: ";
        cin>>a; //asking the user and prompting them
    }
    for(int i=1; i<a+1; i++){//for loop using amount of the number given
        int*a = new int[i]; //Dynamically allocate memory array
        number(a,0,i);// Recursive function call
        cout<<"There are "<<counter<< " solutions to the "<< i <<" queens!"<<endl;
        counter= 0;
        delete[] a;
    }
    return 0;
}
