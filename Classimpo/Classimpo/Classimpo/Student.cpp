#include "Student.h"
#include <algorithm> // max ÇÔ¼ö

using namespace std;

double Student::getAvg()
{
    return (kor + eng + math) / 3.0;
}

int Student::getMaxScore()
{
    return max(max(kor, eng), math);
}
