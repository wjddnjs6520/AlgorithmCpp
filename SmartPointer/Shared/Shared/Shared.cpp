#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    MyClass(int val) : value(val) {
        cout << "MyClass 생성: " << value << endl; // 출력: MyClass 생성: 42
    }
    ~MyClass() {
        cout << "MyClass 소멸: " << value << endl; // 출력: MyClass 소멸: 42
    }
    void display() const {
        cout << "값: " << value << endl; // 출력: 값: 42
    }
private:
    int value;
};

int main() {
    // shared_ptr로 MyClass 객체 관리
    shared_ptr<MyClass> obj1 = make_shared<MyClass>(42);

    // 참조 공유
    shared_ptr<MyClass> obj2 = obj1;

    cout << "obj1과 obj2의 참조 카운트: " << obj1.use_count() << endl; // 출력: 2

    obj2->display(); // 출력: 값: 42

    // obj2를 해제해도 obj1이 객체를 유지
    obj2.reset();
    cout << "obj2 해제 후 obj1의 참조 카운트: " << obj1.use_count() << endl; // 출력: 1

    return 0;
}
