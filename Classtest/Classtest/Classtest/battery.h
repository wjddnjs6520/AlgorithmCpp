#ifndef STUDENT_H_
#define STUDENT_H_

class Battery
{
 public:
    //���� �־����� ������� �⺻���� �Ҵ��ϴ� ������
    Battery(int percent = 100)
    {
        this->percent = percent;
    }
    void plusePercent();
    void minusPercent();
    void setPercent(int num);
    int getPercent();
private :
    int percent;
};


#endif