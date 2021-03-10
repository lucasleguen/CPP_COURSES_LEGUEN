#include <string>
#include <iostream>

class course{
     private:
        std::string _nomJoueur;
        int _score;
public:
    void afficher();
    void avancer();
    std::string getNomJoueur();
};