#include "../include/Equation.hpp"
#include <cmath>
#include <iostream>

using namespace std;

Equation::Equation() {
    this->a = 1.5;
    this->b = 5;
    this->epsilon = 1e-7;
}

float Equation::f(float x) {
    return x - 2 - log(x);
}

float Equation::fp(float x) {
    return (x - 1) / x;
}

void Equation::display() {
    cout << "\033[1m \t=> Solution.. : \033[0m" << this->x << endl;
    cout << "\033[1m \t=> Intervalle : \033[0m[" << this->a << ";" << this->b << "]" << endl;
    cout << "\033[1m \t=> Epsilon... : \033[0m" << this->epsilon << endl; 
}

void Equation::bissection(float epsilon) {
    float x {0};
    float a {this->a};
    float b {this->b};

    while(fabs(a - b) > epsilon) {
        x = (a + b) / 2;
        if(this->f(a) * this->f(x) < 0) {
            b = x;
            this->x = b;
        }else {
            a = x;
            this->x = b;
        }
    }
}

void Equation::newton(float epsilon) {
    float xi {this->a};
    float xii {0};
    
    while(true) {
        xii = xi - (this->f(xi) / this->fp(xi));
        if(fabs(xi - xii) > epsilon){
            xi = xii;
        }else {
            break;
        }
    }
    this->x = xii;
}

void Equation::setEpsilon(float epsilon) {
    this->epsilon = epsilon;
}

float Equation::getEpsilon() {
    return this->epsilon;
}

void Equation::setIntervalle(float a,float b) {
    this->a = a;
    this->b = b;
}

vector<float> Equation::getIntervale() {
    return {this->a, this->b};
}

Equation::~Equation() {

}