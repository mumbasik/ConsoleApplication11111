

#include <iostream>
#include <cmath>
using namespace std;


class TheSide {
protected:
    int side;
public:
    TheSide() {
        side = 1;
    }
    virtual void Print() = 0;
        
    
};
class Squer : public TheSide {
    int lenghtofside;
public:
    Squer() {
        lenghtofside = 4;
    }
    virtual  void Print() override {
        cout << "perimeter of Squer : " << side + 3 << endl;
        cout << "Area of Squer " << pow(lenghtofside, 2) << endl;
}
};
class triangle : public TheSide {
    int lenghtofside;
public:
    triangle() {
        lenghtofside = 6;
    }
    virtual void Print() override {
        cout << "perimeter of  triangle: " << side + 2 << endl;
        cout << "Area of triangle: " << pow(lenghtofside, 2) << endl;
    }
};
class rectangle: public TheSide {
    int lenghtofside;
public:
    rectangle() {
        lenghtofside = 2;
    }
    virtual void Print() override {
        cout << "perimeter of  rectangle: " << side + 3 << endl;
        cout << "Area of rectangle: " << pow(lenghtofside, 2) << endl;
    }
};
class Circle : public TheSide {
    int radius;
    int PI;
public:
    Circle() {
        radius = 3;
         PI = 3.14159265358979323846;
    }
    virtual void Print() override {
        
        cout << "Perimeter of Circle: " << pow(radius,2) * PI << endl;
        cout << "Area of Circle: " << PI * pow(radius, 2) << endl;
    }
};
int main()
{
    Squer q;
    q.Print();
    triangle x;
    x.Print();
    rectangle a;
    a.Print();
    Circle obj;
    obj.Print();
}


