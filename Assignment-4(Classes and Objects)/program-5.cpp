// Problem - 5:- Define a class Circle with radius as its property. Provide setRadius() and getRadius() nethods. Also define methods to return area and circumference of circle.

#include<iostream>
using namespace std;

class Circle{
    private:
        double radius;
    public:
        void setRadius(double r){
            radius = r;
        }
        double getRadius(){
            return radius;
        }
        double area(){
            return 3.14 * radius * radius;
        }
        double circumference(){
            return 2 * 3.14 * radius;
        }
};

int main(){
    Circle circle;
    circle.setRadius(10.0);
    
    int radius = circle.getRadius();
    cout<<"Radius is "<<radius<<endl;
    
    cout<<"Area of the circle is "<<circle.area()<<endl;
    cout<<"Circumference of the circle is "<<circle.circumference()<<endl;
    return 0;
}