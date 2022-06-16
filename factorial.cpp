#include<iostream>
using namespace std;

int main () { 
    int i,n,factorial=1;
    cout<<"Enter n"<<endl;
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        factorial=factorial*i;
    }
    cout<<factorial<<endl;
    return 0;
}