//Extra Credit Assignment
#include <iostream>
using namespace std; 
int main(){
    int n; //initalizing the variable 
    cout<<"Enter a number: ";//Asking the user with a speech
    cin>>n;
    while(n<1){
        cout<<"Number can't be less than 1\n";
        cin>>n;
    }
    int** arr = new int *[n];
    for(int i=0; i<n;i++){
        arr[i]= new int[n]; 
    }
    int put = n*n; 
    for(int i =0; i<n; i++ ){
        for(int c =0; c<n; c++){
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