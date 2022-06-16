#include<iostream>
using namespace std;

int main () { 
     int m,r,n,sum=0;
     
    cout<<"Enter n"<<endl;
    cin>>n;
    m=n;
    cout<<"Digits are"<<endl;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
        cout<<r<<endl;

    }
    
    if (sum==m)
    {
        cout<<"This is an Armstrong number"<<endl;
    }
    else
    {
        cout<<"Not an Armstrong number"<<endl;
    }
    
    
    return 0;
}