#include <iostream>
using namespace std;

/*
int main(){
    int num1, num2;
    cout<< "Enter a number: ";
    cin>> num; 
    if(num%2 ==0 ){
        cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;
    }
    return 0;
}*/
/*
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;

    int whilesum =0, whileCount =1;
    while(whileCount<= n){
        whileSum+= whileCount;
        whileCount++;
    }
    cout<<"Sum using while loop: " <<whileSum <<endl;
    int forSum =0;
    for(int i =1; i<=n; i++){
        forSum +=i;
    }
    cout<<"Sum using for loop: "<< forSum<< endl;
    return 0;
}
*/

int factorial(int x){
  if(x<=1){
      return 1;
  }
  return x*factorial(x-1);
}
int main(){
 int x;
 cout<<"Enter a postiive integer";
 cin>>x; 
 while(x<0){
   cout<<"Enter a positive integer";
   cin>>x;
 }
 cout<<"The factorial of the number you enter is : "<< factorial(x); 
 return 0;
}
