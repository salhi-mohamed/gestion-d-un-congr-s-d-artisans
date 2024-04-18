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
    string role;
    std::set<std::string> tasks;
    list<int*> sessions;
  public :
    respensable() ;
    respensable(string role,int c,string n,string p ,int t ,string e,string a,int nblg,list<int*>,set<string>);
    respensable(const respensable &);
    string getrole()const ;
  list<int*> getsessions () const;
    void setrole(string);
   // void saisir_sessions(list<int*>);
    void ajouter_session(int*);
    void supprimer_session();
    void afficherPersonne();
    void modifier();
    ~respensable();
    respensable & operator=(const respensable &);
    void saisir_respensable();
   friend ostream& operator<<(ostream&, const respensable&);
    friend istream& operator>>(istream&,respensable&);
     int calculerExperience() const;
     void afficherArtisanGagnant(const vector<evaluation>& evaluations) const;
    const set<string>& gettasks() const { return tasks; }
    void enregistrer();
};
#endif // RESPENSABLE_H_INCLUDED
