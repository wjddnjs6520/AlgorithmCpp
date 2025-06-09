#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string str = "10 20 30";
    stringstream ss(str);
    int num;

    ss >> num; // num = 10 읽음

    cout << "읽은 숫자: " << num << endl;
    cout << "ss.str(): " << ss.str() << endl;  // 원본 문자열 출력 (변하지 않음)

    // 남은 부분을 따로 확인하려면 아래처럼 해야 함
    string remaining;
    getline(ss, remaining);
    cout << "남은 스트림 내용 (getline으로 읽기): " << remaining << endl;

    return 0;
}
