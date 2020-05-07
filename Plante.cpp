#ifndef PLANTE_CPP
#define PLANTE_CPP
#include "Plante.h"

//définition des variables et fonctions

#include <string>


    Plante::Plante(std::string name, int hydrat, int pousse, int coupe, std::string typ) :
        _nom(name), _hydratation(hydrat), _type(typ), _pousse(0), _coupe(coupe)
        {}

    std::string Plante::getName(){                //fonction qui va permettre de donner un nom à la plante
        return _nom;
    }

    int Plante::getPousser(){                    //fonction qui montre la taille de la plante
        return _pousse;
    }

    int Plante::getHydrater(){
        return _hydratation;
    }

    int Plante::getCouper(){
        return _coupe;
    }

    void Plante::grandir(){                       //fonction qui montre l'évolution de la plante
        _pousse += _hydratation;                  //fonction qui associe la pousse de la plante avec la façon dont elle est hydratée
        _hydratation -= 1;                        //Une fois que la plante pousse, elle perd de l'eau
        _coupe += 1;                              //une fois que la plante pousse, elle gagne de l'épaisseur
        
        if(_hydratation<0){                          //permet à la plante de ne pas descendre en-dessous de 0 au niveau de l'hydratation
            _hydratation=0;
        }
    }

    void Plante::hydrater(){                       //augmenter le niveau de motivation pour pouvoir avancer
        _hydratation += 3;
    }

    void Plante::tailler(){                       //augmenter le compteur de coupe
        _coupe += 3;
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