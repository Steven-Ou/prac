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

        // Apply negative sign to the numerator if the fraction is originally negative
	    if ((numerator < 0 && denominator > 0) || (numerator > 0 && denominator < 0)) {
	        numerator = -abs(numerator);
	    } else {
	        numerator = abs(numerator);
	    }
	    denominator = abs(denominator);
    }
}
Frac operator+(const Frac& f1, const Frac& f2) {
    int num = f1.getNumerator() * f2.getDenominator() + f2.getNumerator() * f1.getDenominator();
    int den = f1.getDenominator() * f2.getDenominator();
    return Fraction(num, den);
}