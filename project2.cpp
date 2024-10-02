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
      if(q[shu]==q[i] || shu-i==q[shu]|| shu-i==q[i]-q[shu] ){
         goto nextR;
      }
   }
   goto nextCo;

   backtrack:
   shu--;
   if(shu==-1){
      return 0;
   }
   goto nextR;
   
   print:
}