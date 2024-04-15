#include"stand.h"
#include<iostream>
#include"string"
using namespace std;
stand::stand()
{


}
void stand::saisir_stand()
{
    cout<<"saisir l identifiant du stand : "<<endl;
    cin>>id_stand;
    cout<<"saisir l 'emplacement du stand : "<<endl;
    cin>>emplacement;
}
stand::stand(int id_stand,string emplacement)
{
    this->id_stand=id_stand;
    this->emplacement=emplacement;

}
void stand::setId(int id_stand)
{
  this->id_stand=id_stand;
}
int stand::getId()
{
    return id_stand;
}
void stand::setEmplacement(string emplacement)
{
    this->emplacement=emplacement;
}
string stand::getEmplacement()
{
  return emplacement;
}
void stand::afficherStand()
{
    cout<<"AFFICHAGE DU STAND"<<endl;
    cout<<"l'identifiant de ce stand est : "<<id_stand<<endl;
    cout<<"l'emplacement de ce stand est : "<<emplacement<<endl;
}
/*void stand::editerStand()
{
    char reponse,rep;
    do
    {
        cout<<"Que voulez-vous modifier pour ce stand ? I : identifiant , E : emplacement"<<endl;
        cin>>reponse;
        switch(reponse)
        {
            case 'I':
              cout<<"Saisir le nouveau identifiant  : "<<endl;
              cin>>id_stand;
               break;
            case 'E':
              cout<<"Saisir le nouveau emplacement : "<<endl;
              cin>>emplacement;
              break;
            default :
               cout<<"R�ponse invalide ! "<<endl;
                break;
        }
        cout<<"Voulez-vous encore modifier ? O : OUI , N: NON"<<endl;
        cin>>rep;
    }
    while((rep=='O')||(rep=='o'));
}*/
void stand::editerStand() {
    char reponse;

    do {
        cout << "Que voulez-vous modifier pour ce stand ?" << endl;
        cout << "I : Identifiant" << endl;
        cout << "E : Emplacement" << endl;
        cout << "H : Heure d'ouverture" << endl;
        cout << "F : Heure de fermeture" << endl;
        cin >> reponse;

        switch (toupper(reponse)) {
            case 'I':
                cout << "Saisir le nouvel identifiant : ";
                cin >> id_stand;
                break;
            case 'E':
                cout << "Saisir le nouvel emplacement : ";
                cin.ignore(); // Ignorer le caract�re de nouvelle ligne restant dans le buffer
                getline(cin, emplacement);
                break;
            case 'H':
                cout << "Saisir la nouvelle heure d'ouverture : ";
                cin >> heure_ouverture;
                break;
            case 'F':
                cout << "Saisir la nouvelle heure de fermeture : ";
                cin >> heure_fermeture;
                break;
            default:
                cout << "R�ponse invalide !" << endl;
                continue; // Revenir au d�but de la boucle pour redemander une r�ponse valide
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



ostream& operator<<(ostream& o,const stand &s)
{
    o<<"Affichage des informations relatives � ce stand : "<<endl;
    o<<"Identifiant du stand :"<<s.id_stand<<endl;
    o<<"Emplacement du stand : "<<s.emplacement<<endl;
    o<<"Heure d'ouverture : "<<s.heure_ouverture<<endl;
    o<<"Heure fermeture : "<<s.heure_fermeture<<endl;
    return o;
}
stand::~stand(){}
istream& operator>>(istream &i,stand &s)
{
    cout<<"Saisir l'identifiant du stand : "<<endl;
    i>>s.id_stand;
    cout<<"Saisir l'emplacement du stand : "<<endl;
    i>>s.emplacement;
    cout<<"Saisir l'heure d'ouverture : "<<endl;
    i>>s.heure_ouverture;
    cout<<"Saisir l'heure de fermeture : "<<endl;
    i>>s.heure_fermeture;
    return i;

}
void stand::set_heure_ouverture(string heure_ouverture)
{
    this->heure_ouverture=heure_ouverture;
}
string stand::get_heure_ouverture()
{
    return heure_ouverture;
}
void stand::set_heure_fermeture(string heure_fermeture)
{
    this->heure_fermeture=heure_fermeture;
}
string stand::get_heure_fermeture()
{
    return heure_fermeture;
}
bool stand::estOuvert(string heure_actuelle) const {
    return (heure_actuelle >= heure_ouverture && heure_actuelle <= heure_fermeture);
}
