#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class personne
{
    protected :
      int Cin;
      string nom;
      string prenom;
      int tel;
      string email;
      string adresse;
      vector<string> langues;
    //int nblangues; A vérifier
    public :
       personne();
       personne(int,string,string,int,string,string);//a verifier concernant l'initialisation de l'attribut langues
       personne(const personne &);
      // ~personne();
      virtual int getcin()=0; // methode qui retourne le num de cin de la personne
       virtual string getnom()=0; //methode qui retourne le nom de la personne
       virtual string getprenom()=0; // methode qui retourne le prenom de la personne
       virtual int gettel()=0; //methode qui retourne le numero de telephone de la personne
       virtual string getemail()=0; //methode qui retourne l email de la personne
       virtual string getadresse()=0; //methode qui retourne l adresse de residence de la personne
       virtual void getlangues()=0; //methode qui affiche les langues maitrisées par la personne
       virtual void setcin(int)=0; //methode qui permet le saisie de num de cin de la personne
       virtual void setnom(string)=0;//methode qui permet le saisie du nom de la personne
       virtual void setprenom(string)=0;
       virtual void settel(int)=0;
       virtual void setemail(string)=0;
       virtual void setadresse(string)=0;
       virtual void afficherPersonne()=0;
       //void supprimer();
       virtual void modifier()=0;
       virtual void saisirlangues()=0;
       virtual void ajouterLangue()=0;
       virtual void supprimer_langue(int )=0;
       virtual void supprimer_session(int)=0;

};


#endif // PERSONNE_H_INCLUDED
