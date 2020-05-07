#ifndef ESCARGOT_H
#define ESCARGOT_H
#include <string>

class Escargot{

    private:
        std::string _nom;
        int _motivation;
        int _numero;
        int _distance;
    public:
        Escargot(std::string name, int motivation, int numero);   //constructeur            //pas besoin de mettre la distance car elle est à 0 de base
        
        std::string getName();
        std::string getLook();
        int getDistance();
        int getMotiver();
        void avancer();             //pas de valeur de retour
        void motiver();             //pas de valeur de retour
        //rien écrire pour numéro car il reste fixe pour chaque escargot
};
#endif