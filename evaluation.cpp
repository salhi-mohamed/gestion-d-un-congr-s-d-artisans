#include<iostream>
#include"evaluation.h"
#include<string>
using namespace std;
evaluation::evaluation()
{
    cout<<"saisir l'id de l'evaluation : "<<endl;
    cin>>id_evaluation;
    cout<<"saisir la date de l'evaluation "<<endl;
    cin>>date_evaluation;
    cout<<"saisir les points correspendants a cet evaluation : "<<endl;
    cin>>points;
}
evaluation::evaluation(int i,int p,string d)
{
    id_evaluation=i;
    date_evaluation=d;
    points=p;
}
void evaluation::setId(int id)
{
    id_evaluation=id;
}
void evaluation::setDate_evaluation(string date)
{
    date_evaluation=date;
}
void evaluation::setPoints(int point)
{
    points=point;
}
int evaluation::getId()
{
    return id_evaluation;
}
int evaluation::getPoints()
{
    return points;
}
string evaluation::getDate_evalution()
{
    return date_evaluation;
}
void evaluation::editerEvaluation()
{
    char rep,rep2;
    do
    {

        cout<<"Que voulez-vous modifiez ? P : points , D : Date de l'evaluation : "<<endl;
        cin>>rep;
        switch(rep)
        {
            case 'P' :
              cout<<"saisir le nouveau nombre des points : "<<endl;
              cin>>points;
              break;
            case 'D' :
                cout<<"saisir la nouvelle date de l'evaluation : "<<endl;
                cin>>date_evaluation;
                break;
            default :
               cout<<"Reponse invalide !"<<endl;
               break;

        }
        cout<<"Voulez-vous encore modifiez ? O : oui , N : non : "<<endl;
        cin>>rep2;
    }
    while(rep2!='N');

}
void evaluation :: afficher_evaluation()
{
    cout<<"ID evaluation : "<<id_evaluation<<"points : "<<points<<"Date de l evaluation : "<<date_evaluation<<endl;
}

