#include<iostream>
using namespace std;

int main () { 
    int i,sum=0,n;
    cout<<"Enter n"<<endl;
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
       sum=sum+i;
    }
    
       cout<<"Sum of\n"<<n<<"natural numbers is\n"<<sum<<endl;
    
    return 0;
}