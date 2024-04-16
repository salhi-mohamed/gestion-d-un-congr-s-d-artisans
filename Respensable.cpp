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
        cout << "Saisir la session num�ro " << i+1 << " : ";
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
        cout<<"Que voulez-vous modifiez ? T :num�ro de t�l�phone , A : adresse de r�sidence , M : adresse mail  , R : Role"<<endl;
        cin>>rep;
        switch(rep)
        {
            case 'T':
              cout<<"saisir le nouveau num�ro de telephone : "<<endl;
              cin>>tel;
            break;
            case 'A':
             cout<<"saisir la nouvelle adresse de r�sidence : "<<endl;
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
              cout<<"r�ponse invalide !"<<endl;
              break;


        }
        cout<<"voulez-vous modifiez encore ? , O : Oui , N : Non "<<endl;
        cin>>reponse;

    }
    while(reponse!='N');*/
void respensable::modifier() {
    // Appeler d'abord la m�thode modifier de la classe de base personne
    personne::modifier();

    char reponse;
    do {
        cout << "Que voulez-vous modifier pour ce responsable ?" << endl;
        cout << "R : Role, S : Sessions, Q : Quitter" << endl;
        cin >> reponse;

        switch (toupper(reponse)) {
            case 'R':
                cout << "Saisir le nouveau r�le : ";
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
                            cout << "Saisir le num�ro de la nouvelle session : ";
                            cin >> *session;
                            sessions.push_back(session);
                            cout << "Session ajout�e avec succ�s." << endl;
                            break;
                        }
                        case 'S': {
                            if (sessions.empty()) {
                                cout << "La liste des sessions est vide." << endl;
                            } else {
                                int numero;
                                cout << "Saisir le num�ro de session � supprimer : ";
                                cin >> numero;
                                if (numero >= 1 && numero <= sessions.size()) {
                                    delete sessions[numero - 1];
                                    sessions.erase(sessions.begin() + numero - 1);
                                    cout << "Session supprim�e avec succ�s." << endl;
                                } else {
                                    cout << "Num�ro de session invalide." << endl;
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
                return; // Quitter la m�thode
            default:
                cout << "R�ponse invalide !" << endl;
        }

        do {
            cout << "Voulez-vous encore modifier ? O : OUI, N : NON" << endl;
            cin >> reponse;

            if (toupper(reponse) != 'O' && toupper(reponse) != 'N') {
                cout << "R�ponse invalide !" << endl;
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
    // V�rifier si la liste des sessions est vide
    if (sessions.empty()) {
        cout << "La liste des sessions est vide. Aucune session � supprimer." << endl;
        return;
    }

    // Afficher les sessions disponibles
    cout << "Sessions disponibles :" << endl;
    for (size_t i = 0; i < sessions.size(); ++i) {
        cout << i + 1 << ". Session " << *sessions[i] << endl;
    }

    // Demander � l'utilisateur de saisir le num�ro de la session � supprimer
    int numero;
    do {
        cout << "Saisir le num�ro de la session � supprimer : ";
        cin >> numero;

        // V�rifier si le num�ro est valide
        if (numero < 1 || numero > sessions.size()) {
            cout << "Num�ro de session invalide. Veuillez saisir un num�ro valide." << endl;
        }
    } while (numero < 1 || numero > sessions.size()); // R�p�ter tant que l'indice est invalide

    // Supprimer la session
    delete sessions[numero - 1];
    sessions.erase(sessions.begin() + numero - 1);

    cout << "Session num�ro " << numero << " supprim�e avec succ�s." << endl;
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

// Surcharge de l'op�rateur d'assignation
// Surcharge de l'op�rateur d'assignation
// Surcharge de l'op�rateur d'assignation
respensable& respensable::operator=(const respensable &autre) {
    if (this != &autre) { // V�rifier que ce n'est pas la m�me instance
        // Copie des attributs de l'objet pass� en argument dans l'objet actuel
        personne::operator=(autre); // Appel de l'op�rateur d'assignation de la classe de base

        // Copie de l'attribut sp�cifique � responsable
        role = autre.role;

        // Suppression des anciennes sessions
        for (int i = 0; i < sessions.size(); ++i) {
            delete sessions[i];
        }
        sessions.clear(); // Effacer le vecteur

        // Copie des nouvelles sessions
        for (int i = 0; i < autre.sessions.size(); ++i) {
            int* newSession = new int(*autre.sessions[i]); // Allouer une nouvelle m�moire et copier la valeur
            sessions.push_back(newSession);
        }
    }
    return *this; // Retourner une r�f�rence vers l'objet actuel
}
ostream& operator<<(ostream &o,respensable &r)
{
   /* o<<static_cast<const personne&>(r);
    o<<"role : "<<r.role<<endl;
    o<<"Les sessions : "<<endl;
    for(int i=0;i<r.sessions.size();i++)
    {
        o<<"session  "<<i+1<<" : "<<*(r.sessions[i])<<endl;

    }
    return o;*/

      o << static_cast<const personne&>(r);
    o << "Rôle : " << r.role << endl;
    o << "Les sessions : " << endl;
    for (size_t i = 0; i < r.sessions.size(); ++i) {
        o << "Session " << i + 1 << " : " << *(r.sessions[i]) << endl;
    }

    // Affichage des tâches attribuées au responsable
    o << "Tâches attribuées au responsable : " << endl;
    for (std::set<std::string>::iterator it = r.tasks.begin(); it != r.tasks.end(); ++it) {
        o << "Tâche : " << *it << endl;
    }

    return o;

}
istream& operator>>(istream &in, respensable &r)
{/*
    // Utiliser la surcharge de l'opérateur >> de la classe personne
    in >> static_cast<personne&>(r);

    cout << "Saisir le rôle : " << endl;
    in >> r.role;

    // Saisie des sessions
    cout << "Saisir le nombre de sessions : ";
    int nbSessions;
    in >> nbSessions;
    for (int i = 0; i < nbSessions; ++i) {
        int* session = new int;
        cout << "Saisir l'identifiant de la session " << i + 1 << " : ";
        in >> *session;
        r.sessions.push_back(session);
    }

    return in;*/
     // Utiliser la surcharge de l'opérateur >> de la classe personne
    in >> static_cast<personne&>(r);

    cout << "Saisir le rôle : ";
    in >> r.role;

    // Saisie des sessions
    cout << "Saisir le nombre de sessions : ";
    int nbSessions;
    in >> nbSessions;
    for (int i = 0; i < nbSessions; ++i) {
        int* session = new int;
        cout << "Saisir l'identifiant de la session " << i + 1 << " : ";
        in >> *session;
        r.sessions.push_back(session);
    }

    // Saisie des tâches attribuées au responsable
    cout << "Saisir les tâches attribuées au responsable : " << endl;
    string task;
    while (true) {
        cout << "Saisir une tâche (ou 'fin' pour terminer la saisie) : ";
        in >> task;
        if (task == "fin") {
            break;
        }
        r.tasks.insert(task);
    }

    return in;

}
int respensable::calculerExperience() const {
    return sessions.size();
}


void respensable::afficherArtisanGagnant(const vector<evaluation>& evaluations) const {
    int meilleurScore = 0;
    int idArtisanGagnant = -1;

    // Parcourir toutes les évaluations pour trouver le score maximum avec une boucle for classique
    for (int i = 0; i < evaluations.size(); ++i) {
        const evaluation& eval = evaluations[i];
        if (eval.getPoints() > meilleurScore) {
            meilleurScore = eval.getPoints();
            idArtisanGagnant = eval.get_id_artisan();
        }
    }

    // Afficher l'artisan gagnant s'il existe
    if (idArtisanGagnant != -1) {
        cout << "L'artisan gagnant est celui avec l'ID : " << idArtisanGagnant << endl;
    } else {
        cout << "Aucun artisan n'a été évalué." << endl;
    }
}
