#ifndef EVALUATION_H_INCLUDED
#define EVALUATION_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class evaluation
{
   int id_evaluation;
   int points;
   string date_evaluation;
   int artisan_id;
   public :
     evaluation();
     evaluation(int,int,string,int);
     void setId(int);
     void setPoints(int);
     void setDate_evaluation(string);
     int getId();
     int getPoints() const;
     string getDate_evalution();
     void set_id_artisan(int);
     int get_id_artisan()const;
    // void evaluer(int);

     void editerEvaluation();
     void afficher_evaluation();
     void saisir_evaluation();
     friend ostream& operator<<(ostream&,const evaluation&);
     friend istream& operator>>(istream&,evaluation&);
     ~evaluation();
};

#endif // EVALUATION_H_INCLUDED
