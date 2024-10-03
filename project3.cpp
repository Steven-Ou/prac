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
   cout<< "Solution # " << ++ans << ":\n"; 
   for(int i=0; i<8; i++){
      cout<<"| "<<c[i]<< " |";
   }
   cout<< endl;
}
int main(){
   int q[8]={0};
   
   for(int a0=0;a0<8; a0++){ //going through each and every row and column step by step
      
      q[0]=a0;

      for(int a1 =0; a1<8; a1++){

         q[1]= a1;
         
         for(int a2=0; a2<8; a2++){

            q[2]=a2;

            for(int a3=0; a3<8;a3++){

               q[3]=a3;

               for(int a4=0; a4<8; a4++){

                  q[4]=a4;

                  for(int a5=0; a5<8; a5++){

                     q[5]=a5;

                     for(int a6=0; a6<8; a6++){

                        q[6]=a6;

                        for( int a7=0; a7<8; a7++){
                           
                           q[7]=a7;
                           if(ok(q)){//checks if the q array is good.
                              printB(q); //prints
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }
   return 0; 
}