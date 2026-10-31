#include "../include/Angle.hpp"
#include <iostream> 
#include <cmath>
using namespace std;

//初始化
Angle::Angle(double v0,double g):velocity(v0),gravity(g){}

double Angle::solver(double d)const{
    //接收
    double sin_angle = (gravity*d)/(velocity*velocity);
    //无解
    cout <<"[debug]sin_angle:"<<sin_angle<<endl;
    if (sin_angle < -1.0 || sin_angle > 1.0 || isnan(sin_angle)){
        cout << "nono,无解哦(超出射程)"<<endl;
        return -1;
    }
    double angle = 0.5*asin(sin_angle);

    //返回
    return angle;
}