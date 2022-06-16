#include<iostream>
using namespace std;

int main () { 
     int r,n,reverse=0;
    cout<<"Enter n"<<endl;
    cin>>n;
    
    cout<<"Digits are"<<endl;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        reverse=reverse*10+r;
        cout<<r<<endl;

    }
    
    cout<<"reverse of number is"<<reverse;
    return 0;
}