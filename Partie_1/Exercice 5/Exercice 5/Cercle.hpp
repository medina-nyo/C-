#ifndef Cercle_hpp
#define Cercle_hpp

#include <string>

class Cercle
{
    private:
    float r,x,y;
    
    public:
    Cercle();
    Cercle(float rayon, float abs,float ord);
    
    float airCercle ();
    float perimetreCercle ();
    void affichageCoordonnee ();
    void setRayon (float rayon);
    void setAbscisse (float abs);
    void setOrdonnee (float ord);
    bool interieurPoint (float x, float y);
    void translationCercle (float x, float y);
    void homothetieCercle(float k);
};

#endif
