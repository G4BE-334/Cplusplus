#include <iostream>
using namespace std;

Class Circle
{
public:
    // the radius of the circle
    double radius;
    
    // Construct a default circle object
    Circle()
    {
        radius = 1;
    }
    
    // Construct a circle object
    Circle(double newRadius)
    {
        radius = newRadius;
    }
    
    double getArea()
    {
        return radius * radius * 3.141593;
    }
    
    // Return the perimeter of the Circle
    double getParemeter()
    {
        return 2 * radius * 3.141593;
    }
    
    void setRadius(double newRadius)
    {
        radius = newRadius;
    }
};

int main()
{
    Circle circle1();
    Circle circle2(25);
    Circle circle3(125);
    
    cout << "The area of the circle of radius " << circle1.radius << " is" << circle.getArea() << endl;
    cout << "The area of the circle of radius " << circle2.radius << " is" << circle.getArea() << endl;
    cout << "The area of the circle of radius " << circle3.radius << " is" << circle.getArea() << endl;
    
    circle2.radius = 100
}