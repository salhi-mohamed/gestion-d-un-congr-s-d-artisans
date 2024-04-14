#include"Respensable.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;
respensable::respensable():personne()
{
   /* int nbsessions;

    cout<<"saisir le role : "<<endl;
    cin>>role;
    cout<<"saisir le nombre de sessions : "<<endl;
    cin>>nbsessions;
    for(int i=0;i<nbsessions;i++)
    {
        int session;
        cout<<"saisir la session numero "<<i+1<<endl;
        cin>>session;
        sessions.push_back(&session);
    }

*/
}
void respensable::saisir_respensable()

{
    personne::saisir_personne();
    int nbsessions;
    cout<<"saisir le role : "<<endl;
    cin>>role;
    cout<<"saisir le nombre de sessions : "<<endl;
    cin>>nbsessions;
    for (int i = 0; i < nbsessions; i++) {
        int* session = new int; // Allouer dynamiquement un nouvel entier
        cout << "Saisir la session numéro " << i+1 << " : ";
        cin >> *session;
        sessions.push_back(session);
    }
}
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
/*void respensable::modifier()
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
void respensable::modifier() {
    // Appeler d'abord la méthode modifier de la classe de base personne
    personne::modifier();

    char reponse;
    do {
        cout << "Que voulez-vous modifier pour ce responsable ?" << endl;
        cout << "R : Role, S : Sessions, Q : Quitter" << endl;
        cin >> reponse;

        switch (toupper(reponse)) {
            case 'R':
                cout << "Saisir le nouveau rôle : ";
                cin >> role;
                break;
            case 'S': {
                char choix;
                do {
                    cout << "Que voulez-vous faire avec les sessions ?" << endl;
                    cout << "A : Ajouter une session, S : Supprimer une session, Q : Quitter" << endl;
                    cin >> choix;

                    switch (toupper(choix)) {
                        case 'A': {
                            int* session = new int;
                            cout << "Saisir le numéro de la nouvelle session : ";
                            cin >> *session;
                            sessions.push_back(session);
                            cout << "Session ajoutée avec succès." << endl;
                            break;
                        }
                        case 'S': {
                            if (sessions.empty()) {
                                cout << "La liste des sessions est vide." << endl;
                            } else {
                                int numero;
                                cout << "Saisir le numéro de session à supprimer : ";
                                cin >> numero;
                                if (numero >= 1 && numero <= sessions.size()) {
                                    delete sessions[numero - 1];
                                    sessions.erase(sessions.begin() + numero - 1);
                                    cout << "Session supprimée avec succès." << endl;
                                } else {
                                    cout << "Numéro de session invalide." << endl;
                                }
                            }
                            break;
                        }
                        case 'Q':
                            break; // Quitter la boucle interne
                        default:
                            cout << "Choix invalide." << endl;
                    }
                } while (toupper(choix) != 'Q');
                break;
            }
            case 'Q':
                return; // Quitter la méthode
            default:
                cout << "Réponse invalide !" << endl;
        }

        do {
            cout << "Voulez-vous encore modifier ? O : OUI, N : NON" << endl;
            cin >> reponse;

            if (toupper(reponse) != 'O' && toupper(reponse) != 'N') {
                cout << "Réponse invalide !" << endl;
            }
        } while (toupper(reponse) != 'O' && toupper(reponse) != 'N');

    } while (toupper(reponse) == 'O');
}


respensable::respensable(const respensable &r):personne(r)
{
    role=r.role;

    for(int i=0;i<r.sessions.size();i++)

    {
        int *session;
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
void respensable::supprimer_session() {
    // Vérifier si la liste des sessions est vide
    if (sessions.empty()) {
        cout << "La liste des sessions est vide. Aucune session à supprimer." << endl;
        return;
    }

    // Afficher les sessions disponibles
    cout << "Sessions disponibles :" << endl;
    for (size_t i = 0; i < sessions.size(); ++i) {
        cout << i + 1 << ". Session " << *sessions[i] << endl;
    }

    // Demander à l'utilisateur de saisir le numéro de la session à supprimer
    int numero;
    do {
        cout << "Saisir le numéro de la session à supprimer : ";
        cin >> numero;

        // Vérifier si le numéro est valide
        if (numero < 1 || numero > sessions.size()) {
            cout << "Numéro de session invalide. Veuillez saisir un numéro valide." << endl;
        }
    } while (numero < 1 || numero > sessions.size()); // Répéter tant que l'indice est invalide

    // Supprimer la session
    delete sessions[numero - 1];
    sessions.erase(sessions.begin() + numero - 1);

    cout << "Session numéro " << numero << " supprimée avec succès." << endl;
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
ostream& operator<<(ostream &o,respensable &r)
{
    o<<static_cast<const personne&>(r);
    o<<"role : "<<r.role<<endl;
    o<<"Les sessions : "<<endl;
    for(int i=0;i<r.sessions.size();i++)
    {
        o<<"session  "<<i+1<<" : "<<*(r.sessions[i])<<endl;

    }
    return o;
}
