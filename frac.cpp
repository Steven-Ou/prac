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
    Fraction(int num, int den){
        numerator = num;
        denominator = den;
        simplify();
    }
    int getNumerator() const {
        return numerator;
    }
    int getDenominator() const {
        return denominator;
    }
    void simplify(){
        int commonDivisor = gcd(abs(numerator), abs(denominator)); // Calculate GCD using absolute values
	    numerator /= commonDivisor;
	    denominator /= commonDivisor;
    }
}