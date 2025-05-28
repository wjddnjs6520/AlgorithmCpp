#include <iostream>

using namespace std;

int main()
{/*
     int num1;
    int num2;

    cout << "첫 번째 값 입력: ";
    cin >> num1;

    cout << "두 번째 값 입력: ";
    cin >> num2;


    cout << "두 수의 합: " << (num1 + num2) << endl;


    int score[5];

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << " 번째 학생 점수 입력: ";
        cin >> score[i];
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += score[i];
    }

    cout << "학생 총 점수: " << sum << endl;
    cout << "학생 점수 평균: " << sum / 5;

*/  
    int n; // 삼각형의 높이

    cout << "출력할 삼각형 높이: ";
    cin >> n;

    for (int i = 1; i <= n; i++) { // 초기화: i = 1
        for (int j = 1; j <= n - i; j++) { // 초기화: j = 1
            cout << " "; // 실제 동작: 공백 출력
        }
        for (int j = 1; j <= i*2 -1 ; j++) { // 초기화: j = 1
            cout << "*"; // 실제 동작: 별 출력
        }
        cout << endl; // 줄 바꿈
    }
    for (int i = 1; i < n; i++) {

        for (int j = 0; j < i ; j++) { 
            cout << " "; // 실제 동작: 공백 출력
        }
        for (int j = 2*(n - i) - 1; j >= 1  ; j--) {
            cout << "*"; // 실제 동작: 별 출력
        }
        
        cout << endl; // 줄 바꿈
    }
    return 0;
}

