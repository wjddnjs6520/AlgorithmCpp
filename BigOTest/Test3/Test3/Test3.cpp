#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string str = "10 20 30";
    stringstream ss(str);
    int num;

    ss >> num; // num = 10 ����

    cout << "���� ����: " << num << endl;
    cout << "ss.str(): " << ss.str() << endl;  // ���� ���ڿ� ��� (������ ����)

    // ���� �κ��� ���� Ȯ���Ϸ��� �Ʒ�ó�� �ؾ� ��
    string remaining;
    getline(ss, remaining);
    cout << "���� ��Ʈ�� ���� (getline���� �б�): " << remaining << endl;

    return 0;
}
