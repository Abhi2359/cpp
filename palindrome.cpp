#include<iostream>
using namespace std;


    int main () 
    { 
     int m,r,n,reverse=0;
    cout<<"Enter n"<<endl;
    cin>>n;
    m=n;
    
    while (n>0)
    {
        r=n%10;
        n=n/10;
        reverse=reverse*10+r;
        

    }
    if (reverse==m)
    {
        cout<<"Given number is a palindrome number"<<endl;
    }
    else
    {
        cout<<"Given number is not a palindrome number ";
    }
    

    return 0;
}