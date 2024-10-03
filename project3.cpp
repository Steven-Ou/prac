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
   for(int i=0; i<8; i++){
      cout<<c[i]<< "| ";
   }
   cout<< endl;
}
int main(){
   int q[8]={0};
   
   for(int a0=0;a0<8; a0++){
      
      q[0]=a0;

      for(int a1 =0; a1<8; a1++){

         q[1]= a1;
         
         for(int a2=0; a2<8; a2++){

            q[2]=a2;

            
         }
      }
   }
   return 0; 
}