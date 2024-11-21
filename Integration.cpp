#include <iostream>
using namespace std;
typedef double (*FUNC) (double);

double integrate(FUNC f, double a, double b){

}

double line(double x){
    return x;
}

double square(double x){
    return x*x;
}

double cube(double x){
    return x*x*x;
}

int main(){
    cout<<"The integral of f(x)=x between 1 and 5 is: "<< integrate(line,1,5)
}