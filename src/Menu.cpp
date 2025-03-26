#include "../include/Menu.hpp"
#include <iostream>

using namespace std;

Menu::Menu() {
    this->list_menu = {
        {  
            1,"Calculer par bissection."  
        },  
        {  
            2,"Calculer par Newton....."  
        },  
        {  
            3,"Changer epsilon........."  
        },
        {  
            4,"Changer intervalle......"  
        },
        {  
            5,"Quitter................."  
        }          
    };
}

void Menu::display() {
    cout << "\033[1m-----------MENU----------\033[0m" << endl;
    for(auto m : this->list_menu) {
        cout << m.first << " - " << m.second << endl;
    }
    cout << endl;
}

int Menu::getChoice() {
    int choice;
    do {
        cout << " => Votre choix : " ;
        cin >> choice;
    } while (choice > 5 || choice < 0);

    return choice;
}

void Menu::menu() {
    Equation equation;
    float epsilon {1e-7};
    float a {0};
    float b {1};

    while (this->choice != 5) {
        this->display();
        this->choice = this->getChoice();
    
        switch (this->choice) {
            case 1:
                cout << endl << "\033[1m\t\tBISSECTION\033[0m" << endl;
                equation.bissection(equation.getEpsilon());
                equation.display();
                cout << endl;
                break;
            
            case 2:
                cout << endl << "\033[1m\t\tNEWTON\033[0m" << endl;
                equation.newton(equation.getEpsilon());
                equation.display();
                cout << endl;
                break;

            case 3:
                cout << endl << "\033[1m\t\tEPSILON\033[0m" << endl;
                cout << " => Entrez la nouvelle valeur : ";
                cin >> epsilon;
                equation.setEpsilon(epsilon);
                cout << endl;
                break;

            case 4:
                cout << endl << "\033[1m\t\tINTERVALLE\033[0m" << endl;
                cout << " => Entrez la nouvelle valeur de a : ";
                cin >> a;
                cout << " => Entrez la nouvelle valeur de b : ";
                cin >> b;
                equation.setIntervalle(a,b);             
                break;
            
            default:
                break;
        }
    }
}

Menu::~Menu() {

}
