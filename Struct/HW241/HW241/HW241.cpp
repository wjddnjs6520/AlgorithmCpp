#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(string name, int age) 
    {
        this->name = name;
        this->age = age;
    }

    void saveImpo() 
    {
        cout << "impo is Save!!" << endl;
    }

    string getImpo() {
        string impo = "";
        impo += name;
        impo += " is age: ";
        impo += to_string(age);
        return impo;
    }
};


class StudentPrinter 
{
private:


public:

    void print(Student& student) {
        cout << student.getImpo() << endl;
    }

};

int main()
{
    Student s("SJW", 25);

    StudentPrinter sp;

    sp.print(s);
}
