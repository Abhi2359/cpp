#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
   
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
    Rectangle r1; // Even if we simply create this object and dont make any constructor for it, we will get no error message because of default constructor is provided by computer
     
     
    return 0;
}