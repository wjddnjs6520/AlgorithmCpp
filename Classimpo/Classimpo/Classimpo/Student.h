#ifndef STUDENT_H_
#define STUDENT_H_
class Student
{
public:
    //���� �־����� ������� �⺻���� �Ҵ��ϴ� ������
    Student(int math = 32, int eng = 17, int kor = 52)
    {
        this->math = math;
        this->eng = eng;
        this->kor = kor;
    }
    double getAvg();
    int getMaxScore();

private:
    //������ ����(�̸� ���������� �մϴ�.)
    int kor;
    int eng;
    int math;
};
#endif