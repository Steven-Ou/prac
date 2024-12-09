#include <iostream>
#include <cmath>
using namespace std; 

class Frac {
private:
    int numerator, denominator;

    //A function to find the gcd using Euclidean algorithm
    int gcd(int a , int b){
        while(b!=0){
            int temp =b;
            b=a%b;
            a = temp;
        }
        return a;
    }
public:
}