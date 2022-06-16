#include<iostream>
using namespace std;

int main () { 
    int r,n,sum=0;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Digits are"<<endl;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        cout<<r<<endl;

    }
    
    cout<<"Sum of its digits are"<<sum;
    return 0;
}