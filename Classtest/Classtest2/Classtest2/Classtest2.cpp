#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int initial_n = 0, int initial_d = 1) {
        this->numerator = initial_n;
        this->denominator = initial_d;
    }

    void setNumerator(int n) {
        this->numerator = n;
    }
    void setDenominator(int d) {
        if (d == 0) {
            cout << "숫자 0이 아니어야 합니다." << endl;
        }
        else {
            this->denominator = d;
        }
    }

    void display() {
        cout << "현재 분수 - " << numerator << " / " << denominator << endl;
    }

    Fraction multiple(const Fraction& other) const{
        int newNumerator = numerator * other.numerator;
        int newDenominator = denominator * other.denominator;
        Fraction result(newNumerator, newDenominator);
        result.simplify();
        return result;
    }

    void simplify() {
        int a = gcd(numerator, denominator);
        setNumerator(numerator / a);
        setDenominator(denominator / a);
    }

};

int main()
{
    Fraction f(1, 2);
    Fraction f2(3, 4);
    Fraction f3 = f.multiple(f2);
    f3.display();
}