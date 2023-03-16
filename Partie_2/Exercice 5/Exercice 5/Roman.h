#ifndef Roman_h
#define Roman_h

#include "Livre.h"
#include <string>

using namespace std;

class Roman : public virtual Livre
{
    protected :
    bool goncourt;
    
    public:
    Roman(string t, string a, int p, bool g);
    void affiche();
    void calculer_prix();
};

#endif
