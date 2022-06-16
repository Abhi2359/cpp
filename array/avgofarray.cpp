#include<iostream>
using namespace std;

int main () { 
    float average,n,sum=0;
    
    cout<<"Enter number of element"<<endl;
    cin>>n;
    int num[2];
    for (int i = 0; i <2; i++)
    {
        cout<<i+1<<". Enter the numbe:";
        cin>>num[i];
        sum=sum+num[i];
    }
    cout<<"Average is"<<average;
    
    return 0;
}