# Equation Solver

Solveur d'équations non linéaires implémentant les méthodes de bissection et Newton-Raphson en C++.

##  Fonctionnalités
- **Méthodes numériques** :
  - Bissection (dichotomie)
  - Newton-Raphson
- **Configuration flexible** :
  - Intervalle `[a,b]` modifiable
  - Précision `epsilon` ajustable
- **Équation par défaut** : 
  ```math
  f(x) = x - 2 - \ln(x)
- **Téléchargement**
  ```bash
  git clone https://github.com/Fabien-Halaby/equation-solver.git
  ```
- **Structure du projet**
  ```bash
  equation-solver/
  ├── include/
  │   ├── Equation.hpp  # Déclaration classe Equation
  │   └── Menu.hpp      # Interface utilisateur
  ├── src/
  │   ├── Equation.cpp  # Implémentation des algorithmes
  │   └── Menu.cpp      # Gestion du menu interactif
  ├── test/
  |   ├── main.cpp      # Fichier d'entré
  ├── bin/
  |   ├── main          # Fichier éxecutable
  └── README.md         # Ce fichier
  ```
- **Pérsonnalisation**
  ```bash
  //! Changer la fonction f(x)
  float Equation::f(float x) {
      return /* Votre équation */;  // Ex: exp(x) - 2
  }

  //! Changer sa dérivée f'(x)
  float Equation::fp(float x) {
      return /* Dérivée */;         // Ex: exp(x)
  }
  ```
- **Compilation**
  ```bash
  g++ -o bin/main src/*.cpp test/*.cpp
  ```
- **Ménu interactif**
  ```bash
  -----------MENU----------
  1 - Résoudre par bissection
  2 - Résoudre par Newton
  3 - Modifier la précision (ε)
  4 - Changer l'intervalle [a,b]
  5 - Quitter
  ```
- **Exemple de sortie**
  ```bash
          NEWTON
  => Solution.. : 3.14619
  => Intervalle : [1.5;5]
  => Précision : 1.0e-07
  ```
