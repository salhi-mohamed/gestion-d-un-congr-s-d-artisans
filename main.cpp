#include"personne.h"
#include<iostream>
#include<vector>
#include<string>
#include"Respensable.h"
#include"Artisan.h"
using namespace std;



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

  //s=r->gettasks();
  //cout<<r;
//  cout<<*r;
  //cout<<*r;
  //r->afficherPersonne();
  /*respensable r1;
  r1=*r;
  cout<<"test"<<endl;
  cout<<r1;*/


using namespace std;

int main() {
    vector<respensable> tabresp;
    vector<Artisan>tabart;
    // Ajouter un responsable (utilisation de pointeur)

    // Message d'information
    cout << "Veuillez ajouter un artisan avant de continuer." << endl;
     respensable* r = new respensable();
    cin>>*r;
    tabresp.push_back(*r);
    Artisan *a;
//    a=new Artisan();
    //cin>>*a;
    // Attente de l'ajout de l'artisan (� impl�menter)
    // tabart.push_back(*a);
    // Menu principal
    int choix;

    do {
        cout << "Menu Principal :" << endl;
        cout << "1. G�rer responsable" << endl;
        cout << "2. G�rer artisan" << endl;
        cout << "3. G�rer cr�ation" << endl;
        cout << "4. G�rer �valuation" << endl;
        cout << "5. G�rer employ�" << endl;
        cout << "6. Quitter" << endl;

        cout << "Entrez le num�ro correspondant � votre choix : ";
        cin >> choix;

        switch (choix) {
            case 1:
                // Menu responsable
                int choixRespensable;
                do {
                    cout << "Menu Respensable :" << endl;
                    cout<<"  0.ajouter respensable : "<<endl;
                    cout << "1. Ajouter une session" << endl;
                    cout << "2. Supprimer une session" << endl;
                    cout << "3. Afficher les sessions" << endl;
                    cout << "4. Afficher les t�ches assign�es" << endl;
                    cout << "5. Afficher les informations du responsable" << endl;
                    cout << "6. Modifier les informations du responsable" << endl;
                    cout << "7. Retour au menu principal" << endl;

                    cout << "Entrez le num�ro correspondant � votre choix : ";
                    cin >> choixRespensable;

                    switch (choixRespensable) {
                        case 0:
                          cout<<"Ajout d'un respensable : "<<endl;
                          r=new respensable();
                          cin>>*r;
                          tabresp.push_back(*r);
                            break;
                        case 1:
                            cout << "Ajout d'une session..." << endl;
                            cout << "Responsables disponibles : " << endl;
                            for (int  i = 0; i < tabresp.size(); ++i) {
                                cout << i << ". " << tabresp[i].getnom() << endl;
                            }
                            // Demander � l'utilisateur de choisir un responsable
                            int choixResponsable;
                            cout << "Entrez le num�ro du responsable : ";
                            cin >> choixResponsable;
                            if (choixResponsable >= 0 && choixResponsable < tabresp.size()){
                                int *nouvelleSession;

                            cout<<"Saisir la session a ajouter : "<<endl;
                            cin>>*(nouvelleSession);
                            tabresp[choixRespensable].ajouter_session(nouvelleSession);
                            }
                            cout<<"succes"<<endl;
                             for(int j=0;j<tabresp.size();j++)
                              cout<<tabresp[j];
                            // Appeler la m�thode d'ajout de session
                           // int *nouvelleSession;

                            break;
                        case 2:
                            cout << "Suppression d'une session..." << endl;
                            // Appeler la m�thode de suppression de session
                            //responsable->supprimer_session();
                            break;
                        case 3:
                            cout << "Affichage des sessions..." << endl;
                            // Appeler la m�thode d'affichage des sessions
                            // responsable->afficher_sessions();

                            break;
                        case 4:
                            cout << "Affichage des t�ches assign�es..." << endl;
                            // Appeler la m�thode d'affichage des t�ches assign�es
                            // responsable->afficher_taches();
                            break;
                        case 5:
                            cout << "Affichage des informations du responsable..." << endl;
                            //responsable->afficherPersonne();
                            break;
                        case 6:
                            cout << "Modification des informations du responsable..." << endl;
                            //responsable->modifier();
                            break;
                        case 7:
                            //cout << "Retour au menu principal..." << endl;
                            break;
                        default:
                        cout<<"***"<<endl;
                            //cout << "Choix invalide. Veuillez saisir � nouveau." << endl;
                    }

                } while (choixRespensable != 7);

                break;
            case 2:
                cout << "Menu G�rer Artisan :" << endl;
                // Ajoutez vos fonctionnalit�s pour g�rer les artisans ici
                cout << "Retour au menu principal..." << endl;
                break;
            case 3:
                cout << "Menu G�rer Cr�ation :" << endl;
                // Ajoutez vos fonctionnalit�s pour g�rer les cr�ations ici
                cout << "Retour au menu principal..." << endl;
                break;
            case 4:
                cout << "Menu G�rer �valuation :" << endl;
                // Ajoutez vos fonctionnalit�s pour g�rer les �valuations ici
                cout << "Retour au menu principal..." << endl;
                break;
            case 5:
                cout << "Menu G�rer Employ� :" << endl;
                // Ajoutez vos fonctionnalit�s pour g�rer les employ�s ici
                cout << "Retour au menu principal..." << endl;
                break;
            case 6:
                cout << "Merci d'avoir utilis� notre application. Au revoir !" << endl;
                break;
            default:
                cout << "Choix invalide. Veuillez saisir � nouveau." << endl;
        }

    } while (choix != 6);
    cout<<"succes"<<endl;
    for(int j=0;j<tabresp.size();j++)
     cout<<tabresp[j];

    // Lib�rer la m�moire allou�e pour le responsable


    return 0;

}

