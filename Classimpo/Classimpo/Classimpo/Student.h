#ifndef STUDENT_H_
#define STUDENT_H_
class Student
{
public:
    //값이 주어지지 않을경우 기본값을 할당하는 생성자
    Student(int math = 32, int eng = 17, int kor = 52)
    {
        this->math = math;
        this->eng = eng;
        this->kor = kor;
    }
    double getAvg();
    int getMaxScore();

private:
    //데이터 정의(이를 멤버변수라고 합니다.)
    int kor;
    int eng;
    int math;
};
#endif