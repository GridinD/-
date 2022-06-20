#include <iostream>
using namespace std;
const double PI = 3.14159;
class Circle
{
    public:
        Circle();
        Circle(double rad, double x, double y);
        double getRadius();
        void setRadius(double rad);
        double getCenterX();
        double getCenterY();
        void setCenter(double x, double y);
        double getLength();   
        
    private:
        double radius;
        struct Center
        {
            double x;
            double y;   
        };
        Center center;      
        
};
Circle::Circle()
{
    radius =0;
    center.x = 0;
    center.y = 0;   
}
Circle::Circle(double rad, double x, double y)
{
    radius = rad;
    center.x = x;
    center.y = y;   
}
double Circle::getRadius()
{
    return radius;
}
double Circle::getCenterX()
{
    return center.x;
}
double Circle::getCenterY()
{
    return center.y;
}
void Circle::setRadius(double rad)
{
    radius = rad;   
}
void Circle::setCenter(double x, double y)
{
    center.x = x;
    center.y = y;   
}
double Circle::getLength()
{
    int L;
    L = 2*PI*radius;
    return L;
}

    
 
int main()
{
    double a, a1, a2;
    double min;
    Circle c1(2,4,6);
    Circle c2(5, 2, 3);
    Circle c3(4, 5, 7);
    //c3.setRadius(5);
    cout << c1.getLength()<<endl;
    cout << c2.getLength()<<endl;
    cout << c3.getLength()<<endl;
    a = c1.getLength();
    a1 = c2.getLength();
    a2 = c3.getLength();
    if ( a < a1 && a < a2 )
        min = a;
    else if ( a1 < a && a1 < a2 )
        min = a1;
    else if ( a2 < a && a2 < a1 )
        min = a2;
    cout << "Minimalnaya dlina:"<< min << endl;
}
