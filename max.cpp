#include<iostream>
using namespace std;

int main () { 
    int a,b,c;
    cout<<"Enter any three number"<<endl;
    cin>>a>>b>>c;
    if (a>b&&a>c)
    {
        cout<<"Maximum of three numbers is"<<a<<endl;
    }
    else
    {
        if (b>c)
        {
         cout<<"Maximum of three numbers is"<<b<<endl;
        }
        else
        {
             cout<<"Maximum of three numbers is"<<c<<endl;
        }
        
        
    }
    
    return 0;
}