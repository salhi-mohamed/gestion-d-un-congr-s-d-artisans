#ifndef RESPENSABLE_H_INCLUDED
#define RESPENSABLE_H_INCLUDED
#include<vector>
#include<string>
#include<iostream>
#include"personne.h"
#include"evaluation.h"
#include<set>
#include<list>
#include<string>
#include<iostream>
#include<fstream>
using namespace std;
class respensable :public personne
{
  protected :
    string role;///role de du responsable
    std::set<std::string> tasks;///ensemble contenant les taches attribuées au responsable
    list<int*> sessions;///liste contenant les sessions
  public :
    respensable() ;///constructeur vide
    respensable(string role,int c,string n,string p ,int t ,string e,string a,int nblg,list<int*>,set<string>);///constructeur avec des paramètres
    respensable(const respensable &);///constructeur par recopie
    string getrole()const ;///methode qui retourne le role
  list<int*> getsessions () const;///methode qui retourne les  sessions
    void setrole(string);///methode qui saisit le role
   // void saisir_sessions(list<int*>);
    void ajouter_session(int*);///methode qui ajoute une session a l'ensemble des sessions
    void supprimer_session();///methode qui supprime une session
    void afficherPersonne();///affichage du responsable
    void modifier();///modification des informations du responsable
    ~respensable();///destructeur
    respensable & operator=(const respensable &);///operateur =
    void saisir_respensable();///saisie d'un responsable
   friend ostream& operator<<(ostream&, const respensable&);///opérateur <<
    friend istream& operator>>(istream&,respensable&);///opérateur >>
     int calculerExperience() const;///methode qui retourne le nombre de sessions travaillée par un responsable
     void afficherArtisanGagnant(const vector<evaluation>& evaluations) const;///methode qui affiche l'artisant gagnant en se basant sur les evaluations des artisanrs
    const set<string>& gettasks() const { return tasks; }/// methode qui retourne l'ensemble des taches
    void enregistrer();///methode qui permet l'écriture dans un fichier
};
#endif // RESPENSABLE_H_INCLUDED
