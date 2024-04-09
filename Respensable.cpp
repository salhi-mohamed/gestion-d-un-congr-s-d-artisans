#include"Respensable.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;
respensable::respensable():personne()
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


}
respensable::respensable(string role,int c,string n,string p ,int t ,string e,string a):personne(c,n,p,t,e,a)
{
    int nbsessions;
    this->role=role;
    cout<<"saisir le nombre de sessions : "<<endl;
    cin>>nbsessions;
    for(int i=0;i<nbsessions;i++)
    {
        int session;
        cout<<"saisir la session numero "<<i+1<<endl;
        cin>>session;
        sessions.push_back(session);
    }
}
void respensable::afficherPersonne()
{



    cout<<"Affichage des informations relatives à ce personne : "<<endl;
    cout<<"Cin : "<<Cin<<endl;
    cout<<"Nom : "<<nom<<endl;
    cout<<"Prénom : "<<prenom<<endl;
    cout<<"Numéro de téléphone : "<<tel<<endl;
    cout<<"Adresse email :  "<<email<<endl;
    cout<<"Adresse de résidence : "<<adresse<<endl;
    getlangues();


    cout<<"le role est : "<<role<<endl;
    cout<<"Affichage des sessions : "<<endl;
    for(int i =0;i<sessions.size();i++)
    {
        cout<<"Session numero "<<i+1<<endl;
        cout<<sessions[i]<<endl;
    }
}
void respensable::modifier()
{
    char rep,reponse;
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
    while(reponse!='N');

}
respensable::respensable(const respensable &r):personne(r)
{
    role=r.role;
    for(int i=0;i<r.sessions.size();i++)
    {
        int session;
        session=r.sessions[i];
        sessions.push_back(session);
    }

}
string respensable::getrole()
{
    return role;
}
void respensable::ajouter_session()
{
    int nb_sessions;
    cout<<"combien de sessions voulez-vous ajoutez ? "<<endl;
    cin>>nb_sessions;
    for(int i=0;i<nb_sessions;i++)
    {
        int nouvelle_session;
        cout<<"saisir une session "<<endl;
        cin>>nouvelle_session;
        sessions.push_back(nouvelle_session);
    }
}
void respensable::getsessions()
{
    cout<<"Affichage des sessions correspendantes a ce respensable : "<<endl;
    for(int i=0;i<sessions.size();i++)
    {
      cout<<"Session "<<i+1<<" : "<<sessions[i]<<endl;

    }
}
void respensable::setrole(string role)
{
    this->role=role;}
 void respensable::supprimer_session(int i)
{
    sessions.erase(sessions.begin()+i);
    cout<<"suppression effectuée avec sucées "<<endl;
}
int respensable::getcin()
{
    cout<<"le numéro de cin de ce personne est : "<<endl;
    return Cin;
}
string respensable::getnom()
{
    cout<<"le nom de ce personne est : "<<endl;
    return nom;
}
string respensable::getprenom()
{
    cout<<"le prenom de ce personne est : "<<endl;
    return prenom;
}
int respensable::gettel()
{
    cout<<"le numero de téléphone de ce personne est : "<<endl;
    return tel;
}
string respensable::getemail()
{
    cout<<"l'adresse email de ce personne est : "<<endl;
    return email;
}
string respensable::getadresse()
{
    cout<<"l'adresse de ce personne est : "<<endl;
    return adresse;
}
void respensable::getlangues()
{
    cout<<"Les langues que ce personne maitrisent sont : "<<endl;
    for(int i=0;i<langues.size();i++)
    {
        cout<<"langue "<<i+1<<" : "<<(langues[i])<<endl;
    }
}
void respensable::setcin(int c)
{
    Cin=c;
}
void respensable::setnom(string nom)
{
    this->nom=nom;
}
void respensable::setprenom(string)
{
    this->prenom=prenom;
}
void respensable::settel(int tel)
{
   this->tel=tel;
}
void respensable::setemail(string email)
{
    this->email=email;
}
void respensable::setadresse(string adresse )
{
    this->adresse=adresse;
}
void respensable::saisirlangues()
{
    int nblg;
    cout<<"saisir le nombre de de langues :  "<<endl;
    cin>>nblg;
    for(int i=0;i<nblg;i++)
    {
        string langue;
        cout<<"saisir la langue numero : "<<i+1<<endl;
        std::cin>>langue;
        langues.push_back(langue);}}
 void respensable::ajouterLangue()
{
   int nb_langues;
  cout<<"combien de langues voulez-vous ajoutez ? "<<endl;
  cin>>nb_langues;
  string lang;
  for(int i=0;i<nb_langues;i++)
  {
      cout<<"saisir la langue" <<i+1<<"que vous voulez ajouter : "<<endl;
      cin>>lang;
      langues.push_back(lang);
  }


}
void respensable::supprimer_langue(int i )
{
    langues.erase(langues.begin()+i);
    cout<<"suppression effectuée avec succées : "<<endl;
}

