#include "Duree.hpp"
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

void Duree::affichageDuree()
{
    cout << heures << "h";
    if(minutes <= 10)
    {
        cout <<"0" << minutes << "m";
    }
    else
    {
        cout << minutes << "m";
    }
    
    if(secondes <= 10)
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

