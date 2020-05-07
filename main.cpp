#include <iostream>
#include <string>
#include <vector>

#include "Plante.cpp"
#include "Plante.h"

using namespace std;

/*
        Escargot(std::string name, int motivation, int numero);     //pas besoin de mettre la distance car elle est à 0 de base            //constructeur
        std::string getName();
        std::string getLook();
        int getDistance();
        void avancer();             //pas de valeur de retour
        void motiver();             //pas de valeur de retour
        
*/
int main()
{
    int i;
    int jour = 1;
    int choix1;
    int choix2;
    
    Plante A("Plante A", 0, 0);
    Plante B("Plante B", 0, 0);
    Plante C("Plante C", 0, 0);

    cout << "QUE LE JEU COMMENCE !"<< endl<< endl;

    while(jour < 10){
        cout <<"Que faire avec la plante A ?\n\n"<<endl;
        
        cout <<"Taper 1 pour donner de l'engrais,\n"<<endl;
        cout <<"Taper 2 pour tailler,\n"<<endl;
        cout <<"Taper 3 pour hydrater,\n"<<endl;
        cout <<"Taper 4 pour vérifier les infos de la plante\n"<<endl;

        cin >> choix1;
        if(choix1 == 1){                 //donner de l'engrais a la plante A
            cout << "Vous donnez de l'engrais a la plante A"<<endl;
            A.grandir();
            cout << "La taille de la plante A est de "<< A.getPousser() << endl;
        }
        else if(choix1 == 2){            //taillage de la plante A
            cout << "Vous taillez la plante A"<<endl;
            A.tailler();
            cout << "La plante A a été taillé"<< A.getCouper() << endl;
        }
        else if(choix1 == 3){            //hydrater la plante A
            cout << "Vous hydratez la plante A"<<endl;
            A.hydrater();
            cout << "La plante A a été hydraté"<< A.getHydrater() << endl;
        }
        else if(choix1 == 4){            //voir les infos la plante A
            cout << "Vous regardez les infos de la plante A"<<endl;
            cout << "Niveau de nourriture de la plante A : "<< A.getPousser() << "\n" << endl;
            cout << "Niveau de coupe de la plante A : "<< A.getCouper() << endl;
            cout << "Niveau d'hydratation de la plante A : "<< A.getHydrater() << endl;
        }

         jour++;

        cout <<endl<<endl<< "Jour  "<<jour<<endl<<endl;
    }



// cin >> choix;      ==>  similaire au scanf de C

}