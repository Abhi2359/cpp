#include<iostream>
using namespace std;

int main () { 
    int a=5,b=10,i=5;
    if (a>b&& ++i<=b)   // here it will not check second condition since first is false it is known as short circuit
    {
        /* code */
    }
    cout<<i<<endl;

    
    return 0;
}