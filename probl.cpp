#include <iostream>
using namespace std;
void fill_Arr(int arr[], string input){
   

    for (int i = 0; i < 9; ++i) {
        arr[i] = input[i] - '0';
    }

    
    for (int i = 0; i < 9; ++i) {
        cout << arr[i] << " ";
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }

}
int main() {
    int arr[9];
    string number_String; 
    cout<<"Enter a string of 9 digits: \n";
    cin>> number_String; 
    fill_Arr(arr,number_String);
    return 0;
}
