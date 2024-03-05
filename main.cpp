#include"personne.h"
#include<iostream>
#include<vector>
#include<string>
#include"stand.h"
#include"Respensable.h"
using namespace std;
int main()
{
   /* personne *p;
    p=new personne();
    p->setcin(0000);
    p->setnom("ahmed");
    p->settel(20000);
    p->setadresse("gggg");
    p->setemail("jjh");
    p->setprenom("hfhfhf");
    p->saisirlangues();
    // p->getlangues();
    p->afficherPersonne();
    p->ajouterLangue();
    cout<<"affichage apres ajout"<<endl;
    p->afficherPersonne();
   /* p->modifier();
    cout<<"********affichage apres modification*********"<<endl;
    cout<<"***********************************"<<endl;
    cout<<endl;
    p->afficherPersonne();*/
    /*stand *s;
    s=new stand();
    s->afficherStand();
    s->editerStand();
    cout<<"*****affichage apres modification : "<<endl;
    s->afficherStand();*/
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
    r->getrole();

}
