#ifndef RESPENSABLE_H_INCLUDED
#define RESPENSABLE_H_INCLUDED
#include<vector>
#include<string>
#include<iostream>
#include"personne.h"
#include"evaluation.h"
#include<set>

using namespace std;
class respensable :public personne
{
  protected :
    string role;
    vector<int*> sessions;
    std::set<std::string> tasks;
  public :
    respensable() ;
    respensable(string role,int c,string n,string p ,int t ,string e,string a,int nblg,vector<int*>);
    respensable(const respensable &);
    string getrole();
   vector<int*> getsessions();
    void setrole(string);
    void saisir_sessions(vector<int*>);
    void ajouter_session(int*);
    void supprimer_session();
    void afficherPersonne();
    void modifier();
    ~respensable();
    respensable & operator=(const respensable &);
    void saisir_respensable();
    friend ostream& operator<<(ostream&,respensable&);
    friend istream& operator>>(istream&,respensable&);
     int calculerExperience() const;
     void afficherArtisanGagnant(const vector<evaluation>& evaluations) const;
};

#endif // RESPENSABLE_H_INCLUDED
