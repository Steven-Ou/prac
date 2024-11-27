//Extra Credit Assignment
#include <iostream>
using namespace std; 
int main(){
    int n; //initalizing the variable 
    cout<<"Enter a number: ";
    //Asking the user with a speech
    cin>>n;
    while(n<1){//Condition checking while loop
        cout<<"Number can't be less than 1\n";
        //Printing a warning also asking the user to enter a number again
        cin>>n;
    }
    //Allocating memory to a 2d array
    int** arr = new int *[n];
    //Using a loop take in number for each row in the 2d array
    for(int i=0; i<n;i++){
        arr[i]= new int[n]; //Each array will have n integers
    }
    int put = n*n; //Maximum value to be put inside put
    //^ Maximum value calculated by n*n
    //Using a forloop to nest another loop
    for(int i =0; i<n; i++ ){//row
        for(int c =0; c<n; c++){//column
            //The total number that has to be the square of n will continiously be subtracted
            arr[i][c] = put--;
            cout<<arr[i][c]<<"\t";
        }
        cout<<endl;
    }
    
    for(int i=0; i<n;i++){
        delete []arr[i];
    }

    delete[] arr;
    return 0; 
}