#include<iostream>
using namespace std;
int add(int ,int);
int add(int,int ,int);
int main () { 
    int a=10,b=5,c,d;
    c=add(a,b);
    d =add(a,b,c);
    cout<<c<<endl<<d<<endl;
    return 0;
}
int add (int x,int y)
{ 
    return x+y;

}

 int add (int x, int y, int z)  // Here name is same but passing three values known as function overloading
 {
    return x+y+z;

 }
 // Functions that differ only in their return type cannot be overloaded
// like float sum( float a,float b)
 //and int sum( float a, float b)