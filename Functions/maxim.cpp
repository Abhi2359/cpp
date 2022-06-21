#include<iostream>
using namespace std;
int maxim(int,int,int);
int main () { 
    int x=10,y=3,z=6,r;
    r= maxim(x,y,z);
    cout<<"Maximum of three is "<<r<<endl;
    return 0;
}
 int maxim(int a,int b,int c)
 {
    if(a>b&&a>c)
    return a;
    else if(b>c)
      return b;
    else 
    return c;  
 }