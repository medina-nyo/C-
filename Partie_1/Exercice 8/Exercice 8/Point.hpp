#ifndef Point_hpp
#define Point_hpp

#include <string>

class Point
{
    private:
    float x;
    float y;
    
    public:
    Point();
    Point(float abs, float ord);
    void affichageCoordonnee();
    void setAbscisse(float abs);
    void setOrdonnee(float ord);
};

#endif
