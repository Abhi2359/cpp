#include<iostream>
using namespace std;

int main () { 
    int x =10;
    int &y=x; //Initialization is necessary 
    cout<<x<<" "<<y<<endl;
    x++;
    y++;
    cout<<x<<" "<<y<<endl;

    return 0;
}