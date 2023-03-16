#ifndef Point_hpp
#define Point_hpp

#include <string>
using namespace std;

class Point
{
    private:
    float x;
    float y;
    
    public:
    // Constructeur
    Point (float abs, float ord);
    void deplace(float xA, float yA);
    void affichePoint();
};

#endif	
