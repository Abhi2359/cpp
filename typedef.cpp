#include<iostream>
using namespace std;
typedef int marks;
typedef float average;

int main () { 
    marks m1,m2,m3;
    cout<<"Enter your marks"<<endl;
    cin>>m1>>m2>>m3;
    average avg = (m1+m2+m3)/3.0;
    cout<<"Average marks is "<<avg;
    return 0;
}