#include"Respensable.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*respensable::respensable():personne()
{
    int nbsessions;

    cout<<"saisir le role : "<<endl;
    cin>>role;
    cout<<"saisir le nombre de sessions : "<<endl;
    cin>>nbsessions;
    for(int i=0;i<nbsessions;i++)
    {
        int session;
        cout<<"saisir la session numero "<<i+1<<endl;
        cin>>session;
        sessions.push_back(session);
    }


}*/
respensable::respensable():personne(){}
respensable::respensable(string role,int c,string n,string p ,int t ,string e,string a,int nblg,vector<int*>sessions ):personne(c,n,p,t,e,a,nblg)
{
    //int nbsessions;
    this->role=role;
    this->sessions=sessions;


    /*cout<<"saisir le nombre de sessions : "<<endl;
    cin>>nbsessions;
    for(int i=0;i<nbsessions;i++)
    {
        int session;
        cout<<"saisir la session numero "<<i+1<<endl;
        cin>>session;
        sessions.push_back(session);
    }*/
}
void respensable::afficherPersonne()
{
    personne::afficherPersonne();
    cout<<"le role est : "<<role<<endl;
    cout<<"Affichage des sessions : "<<endl;
    for(int i =0;i<sessions.size();i++)
    {
        cout<<"Session numero "<<i+1<<endl;
        cout<<*(sessions[i])<<endl;
    }
}
void respensable::modifier()
{

    personne::modifier();
    char rep='O';
    do
    {
        cout<<"voulez vous modifier le role du responsable ? O:OUI , N:NON "<<endl;
        cin>>rep;
        if ((rep=='O')||(rep=='o'))
        {
            cout<<"Quelle est la nouvelle role ? : "<<endl;
            cin>>role;
        }

    }
    while((rep=='O')||(rep=='o'));}


    /*char rep,reponse;
    do
    {
        cout<<"Que voulez-vous modifiez ? T :numéro de téléphone , A : adresse de résidence , M : adresse mail  , R : Role"<<endl;
        cin>>rep;
        switch(rep)
        {
            case 'T':
              cout<<"saisir le nouveau numéro de telephone : "<<endl;
              cin>>tel;
            break;
            case 'A':
             cout<<"saisir la nouvelle adresse de résidence : "<<endl;
             cin>>adresse;
             break;
            case 'M':
              cout<<"saisir la nouvelle adresse mail : "<<endl;
              cin>>email;
            break;
            case 'R' :
              cout<<"saisir le nouveau role : "<<endl;
              cin>>role;
              break;
            default :
              cout<<"réponse invalide !"<<endl;
              break;


        }
        cout<<"voulez-vous modifiez encore ? , O : Oui , N : Non "<<endl;
        cin>>reponse;

    }
    while(reponse!='N');*/


respensable::respensable(const respensable &r):personne(r)
{
    role=r.role;
     int *session;
    for(int i=0;i<r.sessions.size();i++)
    {
        session=r.sessions[i];
        sessions.push_back(session);
    }

}
string respensable::getrole()
{
    return role;
}
void respensable::ajouter_session(int* sess)
{
   sessions.push_back(sess);
}
vector<int*> respensable::getsessions()
{
    /*cout<<"Affichage des sessions correspendantes a ce respensable : "<<endl;
    for(int i=0;i<sessions.size();i++)
    {
      cout<<"Session "<<i+1<<" : "<<sessions[i]<<endl;

    }*/
    return sessions;
}
void respensable::setrole(string role)
{
    this->role=role;}
 void respensable::supprimer_session(int i)
{
    sessions.erase(sessions.begin()+i);
    cout<<"suppression effectuée avec sucées "<<endl;
}
void respensable::saisir_sessions(vector<int*> session)
{
    /*int n;
    cout<<"saisir le nombre de sessions : "<<endl;
    cin>>n;
    int session;
    for(int i=0;i<n;i++)
    {
        cout<<"saisir une session : "<<endl;
        cin>>session;
        sessions.push_back(session);
    }*/
    sessions=session;
}
respensable::~respensable() {
      for (unsigned i = 0; i < sessions.size(); ++i) {
        delete sessions[i];
    }}

// Surcharge de l'opérateur d'assignation
// Surcharge de l'opérateur d'assignation
// Surcharge de l'opérateur d'assignation
respensable& respensable::operator=(const respensable &autre) {
    if (this != &autre) { // Vérifier que ce n'est pas la même instance
        // Copie des attributs de l'objet passé en argument dans l'objet actuel
        personne::operator=(autre); // Appel de l'opérateur d'assignation de la classe de base

        // Copie de l'attribut spécifique à responsable
        role = autre.role;

        // Suppression des anciennes sessions
        for (int i = 0; i < sessions.size(); ++i) {
            delete sessions[i];
        }
        sessions.clear(); // Effacer le vecteur

        // Copie des nouvelles sessions
        for (int i = 0; i < autre.sessions.size(); ++i) {
            int* newSession = new int(*autre.sessions[i]); // Allouer une nouvelle mémoire et copier la valeur
            sessions.push_back(newSession);
        }
    }
    return *this; // Retourner une référence vers l'objet actuel
}
