//last project
#include <iostream>
#include <cmath>
using namespace std; 
int counter = 0; 

bool ok(int*a, int b){
    for(int i=0;i<b;i++){
        if(*(a+i)==*(a+b) || b-i == abs(*(a+b)-*(a+i))){
            return false;
        }
    }
}
int main(){

}
