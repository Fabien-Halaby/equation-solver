#pragma once

#include <vector>

using namespace std;

class Equation {
private:
    float x;
    float a;
    float b;
    float epsilon;

    float f(float x);
    float fp(float x);
public:
    Equation();
    void bissection(float epsilon);
    void newton(float epsilon);
    void display();
    void setEpsilon(float epsilon);
    void setIntervalle(float a,float b);
    float getEpsilon();
    vector<float> getIntervale();
    ~Equation();
};
