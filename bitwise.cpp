#include<iostream>
using namespace std;

int main () { 

    //AND
    int x=11, y=8,z;
    z=x&y;
    cout<<z<<endl;
     
     //OR

    int p=11, q= 7,r;
    r=p|q;
    cout<<r<<endl;

    //XOR
      int a=11, b=7,c;
      c=a^b;
      cout<<c<<endl;

      //SHIFT(LEFT)
      char m=20,n;
      n=m<<1;
      cout<<(int)n<<endl;

       //SHIFT(right)
      char s=20,t;
      t=s>>1;
      cout<<(int)t<<endl;   

      //NOT
       //SHIFT(LEFT)
      char e=20,f;
      f=~e;
      cout<<(int)f;
    return 0;
}