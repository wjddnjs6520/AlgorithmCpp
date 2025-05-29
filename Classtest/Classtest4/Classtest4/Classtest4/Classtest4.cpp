#include <iostream>
using namespace std;

// 기본 클래스: Phone 
class Phone {
public:
    //순수 가상함수는 대입 0으로 생성
    virtual void displayBrand() = 0;
    virtual void showFeature() = 0;
    //소멸자 가상함수 선언
    virtual ~Phone() {}

};

// Samsung 클래스 작성 (Phone 클래스를 상속받음)
class Samsung : public Phone {
public:
    void displayBrand() {
        cout << "Samsung" << endl;
    }
    void showFeature() {
        cout << "Galaxy S 시리즈" << endl;
    }
};

// Apple 클래스 작성 (Phone 클래스를 상속받음)
class Apple : public Phone {
public:
    void displayBrand() {
        cout << "Apple" << endl;
    }
    void showFeature() {
        cout << "iPhone Pro 시리즈" << endl;
    }
};

// Xiaomi 클래스 작성 (Phone 클래스를 상속받음)
class Xiaomi : public Phone {
public:
    void displayBrand() {
        cout << "Xiaomi" << endl;
    }
    void showFeature() {
        cout << "Redmi Note 시리즈" << endl;
    }
};


int main() {
    // Phone 타입 포인터 배열
    Phone* myPhone[3];

    // 각 모험가 객체 생성 후 포인터 배열에 저장
    myPhone[0] = new Samsung();
    myPhone[1] = new Apple();
    myPhone[2] = new Xiaomi();

    //스킬 사용
    for (int a = 0; a < sizeof(myPhone) / sizeof(Phone); a++) {
        myPhone[a]->displayBrand();
        myPhone[a]->showFeature();
    }

    //메모리 해제
    for (int a = 0; a < sizeof(myPhone) / sizeof(Phone); a++) {
        delete myPhone[a];
    }

    return 0;
}

