#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:

     Rectangle (int l, int b)  // Here we are passing some arguements so it is known as parameterized constructors.This can work as non parameterized when we will set construct it as Rectangle (int l=1,int b=1 )
     
     {
        length=l; // or setLength()
        breadth=b; // or setBreadth()
     }
     Rectangle(Rectangle &r)   // This will copy all the parameters passed in parameterized constructor
     {
        length=r.length;
        breadth=r.breadth;

     }
   
    void setLength(int l)  //These fuctions are called as mutators
    {
        if (l>0)
        
            length=l;
        
        else
        
            length=0;
    }
     void setBreadth(int b)
    {
        if (b>0)
        
            breadth=b;
        
        else
        
            breadth=0;
    }
    int getLength()   // These fuctions are called as accessors
        {
            return length;

        }
    
    int getBreadth()
    {
        return breadth;

    }

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
    Rectangle r1(10,5); 
    Rectangle r2(r1); // This will call copy constructor 
    cout<<"Area is "<<r2.area()<<endl;
    
     
    return 0;
}