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

    // 1. 정수형 변수 value를 선언하고 25라는 값을 할당하세요.
    int value = 25; // <-- 이 부분을 채우세요. value 변수에 초기값 25를 넣으세요.

    // 2. value 변수의 주소를 저장할 포인터 변수 ptr을 선언하세요.
    //    ptr이 value를 가리키도록 value 변수의 주소를 ptr에 저장하세요.
    int* ptr = &value; // <-- 이 부분을 채우세요. value 변수의 주소를 여기에 넣으세요.

    // 3. 포인터 ptr을 사용하여 value 변수의 값을 출력하세요.
    //    (힌트: 포인터가 가리키는 값을 얻으려면 역참조 연산자 '*'를 사용합니다.)
    std::cout << "포인터를 통해 접근한 value의 값: " << *ptr; // <-- 이 부분을 채우세요. ptr이 가리키는 값을 출력하세요.
    std::cout << std::endl;

    // 1. 정수형 변수 score를 선언하고 80이라는 값을 할당하세요.
    int score = 80; // <-- 이 부분을 채우세요. score 변수에 초기값 80을 넣으세요.

    // 2. score 변수를 참조(Reference)하는 레퍼런스 변수 score_ref를 선언하세요.
    int& score_ref = score; // <-- 이 부분을 채우세요. score_ref가 score를 참조하게 만드세요.

    // 3. 레퍼런스 score_ref를 사용하여 score 변수의 값을 출력하세요.
    std::cout << "레퍼런스를 통해 접근한 score의 값: " << score_ref; // <-- 이 부분을 채우세요. score_ref를 사용하세요.
    std::cout << std::endl;

    // 4. 레퍼런스 score_ref를 사용하여 score 변수의 값을 95로 변경하세요.
    score_ref = 95; // <-- 이 부분을 채우세요. score_ref에 새 값 95를 할당하세요.

    // 5. score 변수의 값이 실제로 변경되었는지 확인하기 위해 score 변수 자체를 출력하세요.
    std::cout << "레퍼런스 변경 후 score의 값: " << score; // <-- 이 부분을 채우세요. score 변수 자체를 사용하세요.
    std::cout << std::endl;
*/

    string a = "abc";
    char temp;
    for (int i = 0; i < a.size(); i++) {
        cout << "a: " << a << endl;
        temp = a[0];
        for (int j = 0; j < a.size(); j++) {
            a[j] = a[j + 1];
        }
        a[a.size() - 1] = temp;
        
    }

    return 0;
}

