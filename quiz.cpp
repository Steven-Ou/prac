#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    //number 1;
    
    int i=1;
     while(i<10){
         if(i%3==0){
             cout<<i<<endl;
         }
         i++;
     }
     //number 2

     for(int j =5; j>0; j--){
        cout << j << endl;
     }
    //number 3

    for(int i =0; i<5; i++){
        for(int j=0; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
     }

    return 0;
}