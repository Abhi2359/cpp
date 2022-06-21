//When we use call by reference method function is called inline function 
#include<iostream>
using namespace std;

int main () { 
    int x=10,y=20;
    swap(x,y);
    cout<<x<<endl<<y<<endl;

    return 0;
}
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}