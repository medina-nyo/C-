#ifndef BD_h
#define BD_h

#include "Livre.h"
#include <string>

using namespace std;

class BD : public virtual Livre
{
    protected:
    string dessinateur;
    
    public:
    BD(string t, string a, int p, string d);
    void affiche();
    void calculer_prix();
};

#endif
