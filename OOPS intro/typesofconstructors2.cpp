#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
     Rectangle ()   // Here no argument is getting passed so it is known as non parameterized constructors
     {
        length=1;
        breadth=1;
     }
     Rectangle (int l, int b)  // Here we are passing some arguements so it is known as parameterized cconstructors
     {
        length=l; // or setLength()
        breadth=b; // or setBreadth()
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
    Rectangle r1;  // Now this will call constructor created by us not the default constructor by compiler
    cout<<"Area is"<<r1.area()<<endl;  // 1
    Rectangle r2(10,15);   // This will call parameterized constructors
    cout<<"Area is"<<r2.area()<<endl;   // 150
    
     
    return 0;
}