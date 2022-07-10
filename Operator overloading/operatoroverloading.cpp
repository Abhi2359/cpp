#include<iostream>
using namespace std;
class Complex
{
private: 
  int a,b;

   

public:
    Complex(int x=0,int y=0)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<"+i"<<b;
    }
    Complex operator +(Complex c)   //operator overloaded
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;


    }
};







int main () { 
    Complex c1(5,6);
    Complex c2(2,3);
    Complex c3;
    c3=c1+c2;
    c3.display();
       //Due to operator  overloading we are able to write + directly
    
}