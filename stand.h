#ifndef STAND_H_INCLUDED
#define STAND_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class stand
{
  int id_stand;
  string emplacement;
  string heure_ouverture;
    string heure_fermeture;

  public :
     stand();
     stand(int,string);
     void setId(int);
     int getId();
     void set_heure_ouverture(string);
     string get_heure_ouverture();
     void set_heure_fermeture(string);
     string get_heure_fermeture();
     void  setEmplacement(string);
     void editerStand();
     //void supprimerStand();
     void afficherStand();
     string getEmplacement();
     void saisir_stand();
     friend ostream& operator<<(ostream& ,const stand&);
     friend istream& operator>>(istream&, stand&);
     ~stand();
      bool estOuvert(string heure_actuelle) const;
};




#endif // STAND_H_INCLUDED
