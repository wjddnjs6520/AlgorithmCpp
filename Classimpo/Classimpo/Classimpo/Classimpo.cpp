#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student s;
    Student s2(1);
    Student s3(1, 2);
    Student s4(32, 52, 74);

    //평균 최대점수 출력
    cout << s.getAvg() << endl;
    cout << s.getMaxScore() << endl;

    return 0;
}