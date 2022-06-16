#include<iostream>
using namespace std;

int main () { 
    int a=10, b=3;
    if (true)
    {
        int c=a+b;  //In c++ we can declare variable in block other than main and life of this variable finished in this block
        cout<<c<<endl;

    }
    if (int c=a+b; c>10)
    {
     cout<<c;
    }
    
    return 0;
}