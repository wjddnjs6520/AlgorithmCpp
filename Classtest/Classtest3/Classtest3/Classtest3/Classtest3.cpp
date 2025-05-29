#include <iostream>
using namespace std;

// 기본 클래스: Adventure
class Adventure {
public:
    //순수 가상함수는 대입 0으로 생성
    virtual void useSkill() = 0;
    //소멸자 가상함수 선언
    virtual ~Adventure() {}

};

// 파생 클래스: Warror
class Warror : public Adventure {
    void useSkill() {
        cout << "Warror uses Slash!" << endl;
    }
};

// 파생 클래스: Mage
class Mage : public Adventure {
    void useSkill() {
        cout << "Mage casts Fireball!" << endl;
    }
};
// 파생 클래스: Archer
class Archer : public Adventure {
    void useSkill() {
        cout << "Archer shoots an Arrow!" << endl;
    }
};


int main() {
    // Adventure 타입 포인터 배열
    Adventure* myAdventure[3];

    // 각 모험가 객체 생성 후 포인터 배열에 저장
    myAdventure[0] = new Warror();
    myAdventure[1] = new Mage();
    myAdventure[2] = new Archer();

    //스킬 사용
    for (int a = 0; a < sizeof(myAdventure) / sizeof(Adventure); a++) {
        myAdventure[a]->useSkill();
    }

    //메모리 해제
    for (int a = 0; a < sizeof(myAdventure) / sizeof(Adventure); a++) {
        delete myAdventure[a];
    }

    return 0;
}

