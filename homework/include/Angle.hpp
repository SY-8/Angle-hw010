#ifndef Angle_hpp
#define Angle_hpp

class Angle{
//私有数据
private:
    double velocity;
    double gravity;
//声明
public:
    Angle(double v0,double g);
    double solver(double d)const;
};

#endif