//1d array 
#include <iostream>
using namespace std;
int main(){
   int q[8]={0};
   int shu =0;//count
   int daan=0;//solution

   nextCo:
   shu++;
   if(shu==8){
      goto print;
   }
   q[shu]=-1;

   nextR:
   q[shu]++;
   if(q[shu]==8){
      goto backtrack;
   }
   for(int i=0;i<shu;i++){

   }
   backtrack:

   print:
}