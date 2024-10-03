//dummy brute force 
#include <iostream>
#include <cmath>
using namespace std;
int ans = 0; 

bool ok(int b[]){
   for(int a=0; a<7; a++){
      for(int c=a+1;c<8;c++){
         if(b[a]==b[c]||c-a == abs(b[c]-b[a])){ // checks if the queens are in the same diagonal
            return false;  // checks if the queens are in the same row
         }
      }
   }
   return true;  // when everything is correct returns true
}

void printB(int c[]){
   cout<< "Solution # " << ++ans << ":\n |"; 
}
int main(){
   return 0; 
}