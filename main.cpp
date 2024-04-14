#include"personne.h"
#include<iostream>
#include<vector>
#include<string>
#include"stand.h"
#include"Respensable.h"
#include"evaluation.h"
#include"employe.h"


using namespace std;
int main()
{
    int session1,session2;
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


   /*cout<<"saisir session 1 : "<<endl;
   cin>>session;
   sessionP=&session;
   cout<<"saisir session 2 : "<<endl;
   cin>>session2;
   sessionP2=&session2;
   r->ajouter_session(sessionP);
   r->ajouter_session(sessionP2);
  // r->afficherPersonne();
   respensable r2=*r;
   cout<<"*****************"<<endl;
   //r2.afficherPersonne();*/
   respensable r3;
    r3=*r;
    cout<<"test de l affichage apres l appel de l'operateur = "<<endl;
   r3.afficherPersonne();

}
