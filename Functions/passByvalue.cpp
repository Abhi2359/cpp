#include<iostream>
using namespace std;

int main () { 
    int x=10,y=20;
    swap(x,y);
    cout<<x<<" "<<y<<endl; // still outputs 10,20 it is not swapped because it is passed by value
    return 0;
}
void swap(int a,int b)
 {
    int temp;
    temp=a;
    a=b;
    b=temp;
    // Here formal parametrs a and b will get swapped and actual parameters will remain unaffected
 }