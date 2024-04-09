#ifndef RESPENSABLE_H_INCLUDED
#define RESPENSABLE_H_INCLUDED
#include<vector>
#include<string>
#include<iostream>
#include"personne.h"

using namespace std;
class respensable :public personne
{
  protected :
    string role;
    vector<int> sessions;
  public :
    respensable() ;
    respensable(string role,int c,string n,string p ,int t ,string e,string a);
    respensable(const respensable &);
    string getrole();
    void getsessions();
    void setrole(string);
    //void saisir_sessions();
    void ajouter_session();
    void supprimer_session(int);

     int getcin(); // methode qui retourne le num de cin de la personne
        string getnom(); //methode qui retourne le nom de la personne
        string getprenom(); // methode qui retourne le prenom de la personne
        int gettel(); //methode qui retourne le numero de telephone de la personne
        string getemail(); //methode qui retourne l email de la personne
        string getadresse(); //methode qui retourne l adresse de residence de la personne
        void getlangues(); //methode qui affiche les langues maitrisées par la personne
        void setcin(int); //methode qui permet le saisie de num de cin de la personne
        void setnom(string);//methode qui permet le saisie du nom de la personne
        void setprenom(string);
        void settel(int);
        void setemail(string);
        void setadresse(string);
        void afficherPersonne();
       //void supprimer();
        void modifier();
        void saisirlangues();
        void ajouterLangue();
        void supprimer_langue(int );


};

#endif // RESPENSABLE_H_INCLUDED
