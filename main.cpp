#include"personne.h"
#include<iostream>
#include<vector>
#include<string>
#include"stand.h"
#include"Respensable.h"
#include"evaluation.h"
using namespace std;
int main()
{
   /* personne *p;
    p=new personne();
   // p->setcin(0000);
   // p->setnom("ahmed");
   // p->settel(20000);
   // p->setadresse("gggg");
   // p->setemail("jjh");
    //p->setprenom("hfhfhf");
   // p->saisirlangues();
    p->getlangues();
    p->afficherPersonne();
    p->ajouterLangue();
    //cout<<"affichage apres ajout"<<endl;
    //p->afficherPersonne();
   /* personne p1=*p;
    cout<<"par rcp "<<endl;
    p1.afficherPersonne();*/


    /*p->modifier();
    cout<<"********affichage apres modification*********"<<endl;
    cout<<"***********************************"<<endl;
    cout<<endl;
    p->afficherPersonne();
    /*stand *s;
    s=new stand();
    s->afficherStand();
    s->editerStand();
    cout<<"*****affichage apres modification : "<<endl;
    s->afficherStand();
    respensable *r;
    r=new respensable("resp",0000,"salhi","hama",2000,"jdjdj","mourouj");
    r->afficherPersonne();
    r->editer();
    r->setrole("hhhhh");
    r->afficherPersonne();
    r->getsessions();
    cout<<"apres edit"<<endl;
    r->afficherPersonne();
    cout<<"***********************"<<endl;
    r->getrole();*/
   /* int indice ;
    cout<<"saisir l'indice de la langue a supprimer : "<<endl;
    cin>>indice;
    p->supprimer_langue(indice-1);
    p->afficherPersonne();*/
    /*evaluation *e;
    e=new evaluation();
    e->afficher_evaluation();
    e->editerEvaluation();
    e->afficher_evaluation();*/
    /*stand *s;
    s=new stand();
    s->afficherStand();
    s->editerStand();
    cout<<"***********************"<<endl;
    s->afficherStand();*/
    /*respensable *r;
    r=new respensable();
    r->afficherrespensable();
   /* respensable r2=*r;
    cout<<"******************"<<endl;
    r2.afficherrespensable();*/
    /*int indice;
    cout<<"saisir l indice de la session a supprimer "<<endl;
    cin>>indice;
    r->supprimer_session(indice);
    r->afficherrespensable();*/
    personne *p;
    p=new respensable();
   /* p->getadresse();*/
   //cout<<p->getemail()<<endl;
   /* cout<<"********************"<<endl;
    p->ajouterLangue();
    cout<<"verification de l ajout "<<endl;
    p->afficherPersonne();
    /*p->supprimer_langue(0);
    cout<<"verification de la suppression : "<<endl;
    p->afficherPersonne();
    cout<<"**********************************"<<endl;
    p->getlangues();*/
    int indice ;
    p->modifier();
    p->afficherPersonne();
    cout<<"saisir un entier : "<<endl;
    cin>>indice;
    //p->supprimer_langue(indice-1);
    cout<<"**************"<<endl;
    //p->afficherPersonne();
    p->supprimer_session(indice-1);
    p->afficherPersonne();
    cout<<"*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*"<<endl;
    p->getlangues();

}
