#include"personne.h"
#include<iostream>
#include<vector>
#include<string>
#include"stand.h"
#include"Respensable.h"
#include"evaluation.h"
#include"employe.h"
#include"Artisan.h"
#include"Creation.h"
#include"Sculpture.h"
#include"Broderie.h"
#include"Bijouterie.h"


using namespace std;
int main()
{
    /*int session1,session2;
    int *session1P,*session2P;
    respensable *r;
    vector<int*> tab;
    cout<<"saisir une session 1  : "<<endl;
    cin>>session1;
    session1P=&session1;
    cout<<"saisir une session 2  : "<<endl;
    cin>>session2;
    session2P=&session2;
    tab.push_back(session1P);
    tab.push_back(session2P);
   r=new respensable("admin",0101,"salhi","med",27247548,"salhimed@gmail.com","mourouj1",2,tab);
   r->afficherPersonne();


   cout<<"saisir session 1 : "<<endl;
   cin>>session;
   sessionP=&session;
   cout<<"saisir session 2 : "<<endl;
   cin>>session2;
   sessionP2=&session2;
   r->ajouter_session(sessionP);
   r->ajouter_session(sessionP2);
   r->afficherPersonne();
   respensable r2=*r;
   cout<<"*****************"<<endl;
   //r2.afficherPersonne();
   respensable r3;
    r3=*r;
    cout<<"test de l affichage apres l appel de l'operateur = "<<endl;
   r3.afficherPersonne();
  personne *p;
   p=new personne();
   p->saisir_personne();
   p->afficherPersonne();
   personne *p;
   p=new personne();
   p->saisir_personne();
   respensable* r = dynamic_cast<respensable*>(p);
   respensable *r;
   r=new respensable();
   r->saisir_respensable();
   r->afficherPersonne();
   respensable r2;
   r2=*r;
   cout<<"test"<<endl;
   r2.afficherPersonne();

   personne *p;
   p=new personne();
   p->saisir_personne();
   cout<<*p;
   stand *s;
   s=new stand();
   s->saisir_stand();
   cout<<*s;
   evaluation *e;
   e=new evaluation();
   e->saisir_evaluation();
   cout<<*e;
 respensable *r;
 r=new respensable();
  //r->modifier();
  r->saisir_respensable();

  r->supprimer_session();
  cout<<*r;
  stand *s;
  s=new stand();
  cin>>*s;
  cout<<*s;
  evaluation *e;
  e=new evaluation();
  cin>>*e;
  cout<<*e;
  personne *p;
  p=new personne();
  cin>>*p;
  cout<<*p;
  respensable *r;
  r=new respensable();
  cin>>*r;
  cout<<*r;*/
  respensable *r;
  r=new respensable();
  cin>>*r;
  cout<<*r;
}
