#include <iostream>
using namespace std;
typedef double (*FUNC) (double); // The existing type is double-
//-the new type name is a pointer FUNC double and it will be used- 
//-to identify the existing type and returns a double.

//The integrate function is used to compute the definite integral of a function
//f between limits a and b
double integrate(FUNC f, double a, double b){
    double area =0;// Initializing the variable 'area' to store the accumulated area.
    for(double i=a;i<b;i+=0.0001){//Looping from a to b with a small steps of 0.0001
        area+=0.0001*f(i);//Calculating the area of each tiny rectangle
        //width 0.0001* height f(i) 
    }
    return area;//Return the total area as the approximate integral value
}

//Function line that computes a straight line
double line(double x){
    return x;//Return the value of 'x'.
}

//Function square that computes f(x)=x^2. Represents a parabola curve.
double square(double x){
    return x*x;// returning a x^2.
}


double cube(double x){
    return x*x*x;
}

int main(){
    cout<<"The integral of f(x)=x between 1 and 5 is: "<< integrate(line,1,5)<<endl;
    cout<<"The integral of f(x)=x^2 between 1 and 5 is: "<< integrate(square,1,5)<<endl;
    cout<<"The integral of f(x)=x^3 between 1 and 5 is: "<<integrate(cube,1,5)<<endl;
    return 0;
}