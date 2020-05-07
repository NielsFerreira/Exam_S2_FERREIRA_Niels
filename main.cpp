#include <iostream>
#include <string>
#include <vector>

#include "Escargot.cpp"
#include "Escargot.h"

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
    int tour = 1;
    int choix1;
    int choix2;
    
    Escargot Georges("Georges", 3, 1);
    Escargot David("David", 2, 2);

    cout << "QUE LA COURSE COMMENCE !"<< endl<< endl;

    while(tour < 10){
        cout <<"Tapez 1 pour que Georges avance, tapez 2 pour motiver Georges"<<endl;
        cin >> choix1;
        if(choix1 == 1){                 //Faire avancer Georges
            cout << "Georges avance !"<<endl;
            Georges.avancer();
            cout << "Distance parcourue par Georges : "<< Georges.getDistance() << endl;

            for(i=0;i<10;i++){           //boucle for pour montrer la position de Georges qui va remplacer un trait par lui-même
                if(i==Georges.getDistance()) cout << Georges.getLook();
                else cout << "-";
            }
        }
        else if(choix1 == 2){            //motiver Georges
            cout << "Vous motivez Georges !"<<endl;
            Georges.motiver();
            cout << "Georges a maintenant "<< Georges.getMotiver() << " points de motivation " << endl;
        }

        cout <<endl<< "QUE VA FAIRE DAVID MAINTENANT ?"<<endl<<endl;

        cout << "Tapez 1 pour que David avance, tapez 2 pour motiver David"<<endl;
        cin >> choix2;
        if(choix2 == 1){                //Faire avancer David
            cout << "David avance !"<<endl;
            David.avancer();
            cout << "Distance parcourue par David : "<< David.getDistance() << endl;

            for(i=0;i<10;i++){          //boucle for pour montrer la position de Georges qui va remplacer un trait par lui-même
                if(i==David.getDistance()) cout << David.getLook();
                else cout << "-";
            }
        }
        else if(choix2 == 2){           //motiver David
            cout << "Vous motivez David !"<<endl;
            David.motiver();
            cout << "David a maintenant "<< David.getMotiver() << " points de motivation " << endl;
        }


        if(Georges.getDistance()==10){                        //Condition de victoire pour Georges
           cout << endl << endl << "Georges remporte la course !"<< endl << endl;
            return 0;  
        }else if(David.getDistance()==10){                  //Condition de victoire pour David
            cout << endl << endl << "David remporte la course !"<< endl << endl;
            return 0;
        }

        tour++;

        cout <<endl<<endl<< "NOUS EN SOMME AU TOUR "<<tour<<endl<<endl;
    }



// cin >> choix;      ==>  similaire au scanf de C

}