#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {
public:
    virtual ~Animal() = default;
    virtual void speak() = 0;  // 소리 내기
};


class Dog: public Animal {
public:
    void speak() {
        cout << "Dog Speak: wall wall!" << endl; //강아지 소리 내기
    }
};


class Cat : public Animal {
public:
    void speak() {
        cout << "Cat Speak: mew mew!" << endl; //고양이 소리 내기
    }
};

class Cow : public Animal {
public:
    void speak() {
        cout << "Cow Speak: ommmo ommo!" << endl; //소 소리 내기
    }
};

void makeSpeak(vector<Animal*>& animals) {
    for (Animal* animal : animals) {
        animal->speak();
    }
}


int main() {
    vector<Animal*> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    // Cow 객체 추가
    animals.push_back(new Cow());

    makeSpeak(animals);

    return 0;
}
