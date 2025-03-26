#ifndef MENU_HPP
#define MENU_HPP

#include <map>
#include <vector>
#include <string>
#include "../include/Equation.hpp"

using namespace std;

class Menu {
private:
    map<int,string> list_menu;
    int choice;
public:
    Menu();
    void display();
    int getChoice();
    void menu();
    ~Menu();
};

#endif