#include <string>
#include <vector>
#include <cctype>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    bool isstart = true;
    for (char c : s) {
        //ù���ڰ� ���Ĺ��̸�
        if (isstart && isalpha(c)) {
            answer += toupper(c);
            isstart = false;
        }
        //ù���� �ƴϰ� ���Ĺ��̸�
        else if (!isstart && isalpha(c)) {
            answer += tolower(c);
        }
        //���� Ȥ�� ����
        else {
            answer += c;
            if (c == ' ') {
                isstart = true;
            }
            else {
                isstart = false;
            }
        }
    }
    return answer;
}


int main() {

    cout << solution("3people unFollowed me") << endl;
    cout << solution("for the last week") << endl;
    return 0;
}