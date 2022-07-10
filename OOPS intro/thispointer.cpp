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
     Rectangle (int length, int breadth)  // Here we are passing some arguements so it is known as parameterized cconstructors
     {
       this -> length=length; //
       this -> breadth=breadth; // Used to remove ambiguity betweeen data members of class parameters of functions
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

    
    Rectangle r(10,15);   
    cout<<"Area is"<<r.area()<<endl;   // 150
    
     
    return 0;
}