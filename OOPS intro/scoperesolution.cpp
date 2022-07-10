#include<iostream>
using namespace std;


class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    void setLength();
    void setBreadth();
    int getLength() {return length;}  //Since logic is not complex so we can define it here and these function are known as inline function
    int getBreadth() {return breadth;}
    int area();
    int perimeter();
    bool isSquare();
    ~ Rectangle();


};

Rectangle::Rectangle()
{
    length=1;
    breadth=1;

}
Rectangle::Rectangle(int l,int b)
{
    length=l;
    breadth=b;

}
  Rectangle::Rectangle(Rectangle &r)

{
    length=r.length;
    breadth=r.breadth;

}

Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
void Rectangle::setLength (int l)
{
    length=l;


}
 void Rectangle::setBreadth (int b)
{

    breadth=b;

}
int Rectangle:: area()
{
    return length*breadth;

}
  int Rectangle::perimeter()
  {
    return 2*(length+breadth);
  }

bool Rectangle::isSquare()
{
    length==breadth;

}

Rectangle::~Rectangle()  //Destructor
{
    cout<<"Rectangle is destroyed";
}


int main () { 
    Rectangle r1(10,15);
    cout<<"Area is"<<r1.area()<<endl;
    if(isSquare())
    cout<<"Yes";

    return 0;
}