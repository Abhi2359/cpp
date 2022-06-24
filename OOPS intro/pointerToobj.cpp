#include<iostream>
using namespace std;
 class Rectangle
 {
 public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;

    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
 };
 
 

int main () { 
    Rectangle r1;  // Here we can also take Rectangle *p=new Rectangle
    Rectangle *p1;
    p1=&r1;
    p1 -> length=10;
    p1 -> breadth=15;
    cout<<"Area is "<<r1.area()<<endl;
    cout<<"Perimeter is "<<r1.perimeter()<<endl;
    return 0;
}