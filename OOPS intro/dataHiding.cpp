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
    Rectangle r;
     r.setLength(10);
     r.setBreadth(5);
    cout<<"Area is"<<r.area()<<endl;
    cout<<"Area is"<<r.perimeter()<<endl;
     
    return 0;
}
  // Together mutator and accessor are called as property functions