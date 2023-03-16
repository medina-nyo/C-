#ifndef Duree_hpp
#define Duree_hpp

class Duree
{
    private:
    int heures, minutes, secondes;
    
    public:
    Duree();
    Duree(int h, int min, int sec);
    void affichageDuree();
    void setHeures (int h);
    void setMinutes (int min);
    void setSecondes (int sec);
    int duree_Convertie();
    void ajouteSecondes(int sec);
};

#endif
