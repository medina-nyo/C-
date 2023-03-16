#ifndef vecteur3d_hpp
#define vecteur3d_hpp

#include <string>

class vecteur3d
{
    private:
    float x,y,z;
    
    public:

   // vecteur3d();
   // vecteur3d(float i, float j, float k);
    vecteur3d(float i=0, float j=0, float k=0){x = i; y= j; z= k;}
};

#endif
