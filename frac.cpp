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
    Frac(int num, int den){
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
};
Frac operator+(const Frac& f1, const Frac& f2) {
    int num = f1.getNumerator() * f2.getDenominator() + f2.getNumerator() * f1.getDenominator();
    int den = f1.getDenominator() * f2.getDenominator();
    return Frac(num, den);
}

Frac operator-(const Frac& f1, const Frac& f2) {
    int num = f1.getNumerator() * f2.getDenominator() - f2.getNumerator() * f1.getDenominator();
    int den = f1.getDenominator() * f2.getDenominator();
    return Frac(num, den);
}
Frac operator*(const Frac& f1, const Frac& f2) {
    int num = f1.getNumerator() * f2.getNumerator();
    int den = f1.getDenominator() * f2.getDenominator();
    return Frac(num, den);
}
Frac operator/(const Frac& f1, const Frac& f2) {
    if(f2.getNumerator()!=0){
    int num = f1.getNumerator() * f2.getDenominator();
    int den = f1.getDenominator() * f2.getNumerator();
    return Frac(num, den);
    }else{
        cout<<"Error"<<endl; 
        return Frac(0,1);
    }
}
void display(const Frac& result) {
    cout << "Fraction: " << result.getNumerator() << "/" << result.getDenominator() << endl;
}

int main() {
    Frac f1(1, 2);
    Fraction f2(3, 4);
    Fraction result_add = f1 + f2;
    Fraction result_sub = f1 - f2;
    Fraction result_mul = f1 * f2;
    Fraction result_div = f1 / f2;

    display(result_add); // Output: Fraction: 5/4
    display(result_sub); // Output: Fraction: -1/4
    display(result_mul); // Output: Fraction: 3/8
    display(result_div); // Output: Fraction: 2/3

    return 0;
}