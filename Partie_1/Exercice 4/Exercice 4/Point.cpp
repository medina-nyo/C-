#include <iostream>
#include "Point.hpp"

using namespace std;

int Point::compteur = 0;

Point::Point()
{
    ++ compteur;
    numeroPoint = compteur;
    cout << "Numero de point créer : " << numeroPoint << endl << endl;
}

Point::~Point()
{
    cout << "Numero de point detruit : " << numeroPoint << endl << endl ;
}
