#ifndef STUDENT_H_
#define STUDENT_H_

class Battery
{
 public:
    //값이 주어지지 않을경우 기본값을 할당하는 생성자
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