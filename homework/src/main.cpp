#include "../include/Angle.hpp"
#include <iostream>
#include <cmath>
using namespace std;

double PI = 3.14;
int main(){
    double v0 = 10.0;
    double g = 9.8;
    double d = 5.0;
    Angle a(v0,g);
    double angle = a.solver(d); 
    if (angle > 0){
        double rad = angle *180/PI;
        cout <<"目标距离："<< d << "m" <<endl;
        cout <<"角度制："<< angle << "度" <<endl;
        cout <<"弧度制："<< rad << "rad" <<endl;
    }
    return 0;
}