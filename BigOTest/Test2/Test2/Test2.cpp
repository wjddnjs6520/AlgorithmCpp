#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double nums[] = { 3.5, -3.5, 3.2, -3.2, 3.7, -3.7 };

    for (double n : nums) {
        cout << "°ª: " << n << endl;
        cout << "  round: " << round(n) << endl;
        cout << "  ceil : " << ceil(n) << endl;
        cout << "  floor: " << floor(n) << endl;
        cout << endl;
    }

    return 0;
}
