#include<iostream>
#include<cmath>
using namespace std;

int main () { 
    float a,b,c,d,r1,r2;
    cout<<"Enter a,b and c "<<endl;
    cin>>a>>b>>c;
    d = b*b-4*a*c;
    if (d==0)
    {
        cout<<"Both the roots are real and equal and roots are:"<<endl;
        cout<<(-b/(2*a));

    }
    else if (d>0)
    {
       cout<<"Both the roots are real and unequal and roots are:"<<endl;
       cout<<((-b+sqrt(d))/(2*a))<<endl;
        cout<<"and"<<((-b-sqrt(d))/(2*a));
    }
    else
    {
        cout<<"Both the roots are imaginary roots are:"<<endl; 
        cout<<"Imaginary";

    }
    
    
    return 0;
}