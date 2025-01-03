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
            //The total number that has to be the square of n 
            //will continuously be subtracted as the loop goes on
            arr[i][c] = put--;//The number that it's subtracted everytime
            //will continuously be put into the row base on the column. 
            cout<<arr[i][c]<<"\t";//Printing the current row and column w/ tab
        }//end of the first loop
        cout<<endl;//The last loop we skip lines
    }
    //Deallocating memory for each row in the 2d array
    for(int i=0; i<n;i++){
        delete []arr[i];//Deleting the memory allocated for the i-th row
    }
    //Deallocating memory for the array of pointers
    delete[] arr;//Deleting the memory allocated for the array of row pointers
    return 0; //Exiting the program! 
}