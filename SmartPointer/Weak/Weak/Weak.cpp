#include <iostream>
using namespace std;

template <typename T>
class Array {
    T data[100];
    int size;
public:
    Array() : size(0) {}

    void add(const T& element) {
        if (size < 100)
            data[size++] = element;
    }

    void remove() {
        if (size > 0)
            size--;
    }

    void print() {
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main() {
    Array<int> arr; // 정수형 배열 생성
    arr.add(10);
    arr.add(20);
    arr.add(30);
    arr.print(); //10 20 30

    arr.remove();
    arr.print();// 10 20


    Array<double> darr;
    darr.add(1.21);
    darr.add(0.8221);
    darr.add(30.88);
    darr.print(); //10 20 30

    darr.remove();
    darr.print();// 10 20
    return 0;
}