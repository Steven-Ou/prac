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