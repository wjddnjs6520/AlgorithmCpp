#include <iostream>
#include "battery.h"

using namespace std;

int main()
{
    Battery b;
    Battery b2(0);


    cout << "b 기본 배터리 잔량: " << b.getPercent() << endl;
    cout << "b2 배터리 잔량: " << b2.getPercent() << endl;

    b.minusPercent();
    b.minusPercent();
    cout << "b 2번 사용 후배터리 잔량: " << b.getPercent() << endl;

    b.plusePercent();
    cout << "b 1번 충전 후 배터리 잔량: " << b.getPercent() << endl;
    b.plusePercent();
    cout << "b 1번 충전 후 배터리 잔량: " << b.getPercent() << endl;

}