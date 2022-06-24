#include<iostream>
using namespace std;
int x=10;

int main () { 
    int x=20;
    {
        int x=30;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl; //  '::' is used to access global variable and known as scope resolution operator
    return 0;
}