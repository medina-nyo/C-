#include "Duree.h"
#include <iostream>

using namespace std;

Duree::Duree()
{
    secondes = 0;
    minutes = 0;
    heures = 0;
}

Duree::Duree(int h, int min, int sec)
{
    secondes = 0;
    minutes = 0;
    heures = 0;
    
    int resultatSec;
    
    if(sec < 0)
    {
        secondes = abs(sec);
    }
    else
    {
        secondes = sec;
    }
    
    if(secondes >= 60)
    {
        resultatSec = secondes / 60;
        minutes += resultatSec;
        secondes %= 60;
        
    }
    
    int resultatMinute;
    if(min < 0)
    {
        min = abs(min);
        minutes += min;
    }
    else
    {
        minutes += min;
    }
    
    if(minutes >= 60)
    {
        resultatMinute = minutes / 60;
        heures += resultatMinute;
        minutes %= 60;
    }
    
    h += heures;
    
    if(h < 0)
    {
        heures = abs(h);
    }
    heures = h;
}

void Duree::setSecondes(int sec)
{
    int resultatSec;
    
    if(sec < 0)
    {
        secondes = abs(sec);
    }
    else
    {
        secondes = sec;
    }
    
    if(secondes >= 60)
    {
        resultatSec = secondes / 60;
        minutes += resultatSec;
        secondes %= 60;
    }
}

void Duree::setMinutes(int min)
{
    int resultatMinute;
    if(min < 0)
    {
        min = abs(min);
        minutes += min;
    }
    else
    {
        minutes += min;
    }
    
    if(minutes >= 60)
    {
        resultatMinute = minutes / 60;
        heures += resultatMinute;
        minutes %= 60;
    }
    
}

void Duree::setHeures(int h)
{
    h += heures;
    
    if(h < 0)
    {
        heures = abs(h);
    }
    heures = h;
}

int Duree::getHeure()
{
    return heures;
}

int Duree::getMinutes()
{
    return minutes;
}

int Duree::getSecondes()
{
    return secondes;
}

void Duree::affichageDuree()
{
    cout << heures << "h";
    if(minutes < 10)
    {
        cout <<"0" << minutes << "m";
    }
    else
    {
        cout << minutes << "m";
    }
    
    if(secondes < 10)
    {
        cout <<"0" << secondes << "s" << endl;
    }
    else{
        cout << secondes << "s" << endl;
    }
}

int Duree::duree_Convertie()
{
    int min = (heures * 60) + minutes;
    int sec;
    sec = (min * 60) + secondes;
     
    return sec;
}

void Duree::ajouteSecondes(int sec)
{
    sec += secondes;
    setSecondes(sec);
}

Duree Duree::operator+(const Duree &d1)
{
    return Duree(heures + d1.heures, minutes + d1.minutes, secondes+ d1.secondes);
}

Duree Duree::operator-(const Duree &d1)
{
    return Duree(heures - d1.heures, minutes - d1.minutes, secondes - d1.secondes);
}

bool Duree::operator==(const Duree &d1)
{
    if(heures == d1.heures && minutes == d1.minutes && secondes == d1.secondes)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Duree::operator<(Duree &d1)
{
    int secondes_1 = this->duree_Convertie();
    int secondes_2 = d1.duree_Convertie();
   
    if(secondes_1 < secondes_2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ostream& operator<<(ostream &sortie, Duree &d1)
{
   sortie << d1.getHeure() << "h";
    if(d1.getMinutes() < 10)
    {
        sortie <<"0" << d1.getMinutes() << "m";
    }
    else
    {
        sortie << d1.getMinutes() << "m";
    }
    
    if(d1.getSecondes() < 10)
    {
        cout <<"0" << d1.getSecondes() << "s" << endl;
    }
    else{
        cout << d1.getSecondes() << "s" << endl;
    }
    return sortie;
}

istream& operator>>(istream &entree, Duree &d1)
{
    int h, m, s;
    
    cout << "Heure : ";
    entree >> h;
    cout << "Minutes : ";
    entree >> m;
    cout << "Secondes : ";
    entree >> s;
    
    d1.setHeures(h);
    d1.setMinutes(m);
    d1.setSecondes(s);
    
    return entree;
}
