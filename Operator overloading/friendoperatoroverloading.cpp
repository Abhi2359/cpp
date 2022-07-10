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
  friend  Complex operator +(Complex c1,Complex c2) ;
};


 Complex operator +(Complex c1,Complex c2)  //With the help of friend function we can write this function without using scope resolution operator
    {
        Complex temp;
        temp.a=c1.a+c2.a;
        temp.b=c1.b+c2.b;
        return temp;


    }






int main () { 
    Complex c1(5,6);
    Complex c2(2,3);
    Complex c3;
    c3=c1+c2;
    c3.display();
       //Due to operator  overloading we are able to write + directly
    
}