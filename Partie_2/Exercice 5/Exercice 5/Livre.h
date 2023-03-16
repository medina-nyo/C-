#ifndef Livre_h
#define Livre_h

#include <string>
using namespace std;

class Livre
{
    protected:
    string titre;
    string auteur;
    int pages;
    
    public:
    Livre(string t, string a, int p);
    void affiche();
};

#endif
