#include <string>
#include <iostream>

class Course{
     private:
        std::string _numeroJoueur;
        int _score;
    public:
        void afficher();
        void avancer();
        std::string getNumeroJoueur();
};