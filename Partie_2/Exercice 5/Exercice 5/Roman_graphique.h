#ifndef Roman_graphique_h
#define Roman_graphique_h

#include "Roman.h"
#include "BD.h"
#include <string>

using namespace std;

class Roman_graphique : public Roman, public BD
{
    private:
    bool apprecie_par_Inrocks;
    
    public:
    Roman_graphique(string t, string a, int p, bool g,string d, bool i);
    void affiche();
    void calculer_prix();
};

#endif
