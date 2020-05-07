#ifndef ESCARGOT_CPP
#define ESCARGOT_CPP
#include "Escargot.h"

#include <string>


    Escargot::Escargot(std::string name, int motiv, int num) :
        _nom(name), _motivation(motiv), _numero(num), _distance(0)
        {}

    std::string Escargot::getName(){                //fonction qui va permettre de donner un nom
        return _nom;
    }

    std::string Escargot::getLook(){                //fonction qui permet de montrer l'aspect de notre joueur en écriture
        return "@"+std::to_string(_numero);
    }

    int Escargot::getDistance(){                    //fonction qui montre la distance atteinte
        return _distance;
    }

    int Escargot::getMotiver(){
        return _motivation;
    }
    void Escargot::avancer(){                       //fonction qui montre l'avancement
        _distance += _motivation;                   //position de à l'instant t de l'escargot + le déplacement en fonction de la valeur dans motivation
        _motivation -= 1;                           //après effort d'avancement, perte de motivation
        
        if(_motivation<0){                          //permet à l'escargot de ne pas reculer pendant la course
            _motivation=0;
        }                           
        //_motivation>1?_motivation--:_motivation=0;
        //A ? B : C
        // si A alors B sinon C
    }

    void Escargot::motiver(){                       //augmenter le niveau de motivation pour pouvoir avancer
        _motivation += 3;
    }































/*


//prendre la valeur de la taille de roue pour le vélo
int Velo::getTailleRoues(){
    return _tailleRoues;
}
//donner une taille de roue pour le vélo
void Velo::setTailleRoues(int taille){
    _tailleRoues = taille;
}



//prendre la valeur du nombre de vitesses pour le vélo
int Velo::getNbrVitesse(){
    return _nbrVitesses;
}
//donner un nombre de vitesses pour le vélo
void Velo::setNbrVitesse(int nbr){
    _nbrVitesses = nbr;
}



//nom du propriétaire du vélo de base
std::string Velo::getNomProprietaire(){
    return _NomProprietaire;
}
//donner un nom au propriétaire
void Velo::setNomProprietaire(std::string NomProprietaire){
    _NomProprietaire = NomProprietaire;
}




//vitesse de déplacement
void Velo::rouler(int vitesse){
    // faire rouler le vélo
}

//force utilisée pour se déplacer
void Velo::pedaler(int force){
    //[...] on aura ici du code pour convertir la force en vitesse
}





// ordre et paramètres du Velo
Velo::Velo() : _tailleRoues(20), _nbrVitesses(7), _NomProprietaire("Inconnu-e") {}; // constructeur par défaut
Velo::Velo(int tailleRoues, int nbrVitesses, std::string nomProprietaire)
    : _tailleRoues(tailleRoues), _nbrVitesses(nbrVitesses), _NomProprietaire(nomProprietaire)
    {} // constructeur complet

*/
#endif