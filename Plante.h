#ifndef PLANTE_H
#define PLANTE_H
#include <string>

//insertion des variables et fonction qui vont être appelées

class Plante{

    private:
        std::string _nom;
        int _hydratation;
        std::string _type;
        int _pousse;
        int _coupe;
    public:
        Plante(std::string name, int hydratation, int pousse, int coupe, std::string type);   //constructeur            //pas besoin de mettre la distance car elle est à 0 de base
        
        std::string getName();
        int getPousser();
        int getHydrater();
        int getCouper();
        void grandir();             //pas de valeur de retour
        void hydrater();             //pas de valeur de retour
        void tailler();
        //rien écrire pour numéro car il reste fixe pour chaque escargot
};
#endif