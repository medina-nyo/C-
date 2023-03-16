#ifndef Point_h
#define Point_h

class Point
{
    private :
    double abscisse, ordonnee;
  
    public :
    Point();
    Point(double x, double y);
    void setAbscisse(double x);
    void setOrdonnee(double y);
    double getAbscisse();
    double getOrdonnee();
    void affichage();
};
#endif
