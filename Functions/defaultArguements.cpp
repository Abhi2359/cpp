#include <iostream>
using namespace std;
int sum(int a,int b,int c=0)  //Here by default c is 0 it may take value if necessary
{
return a+b+c;
}
int main()
{
    cout<<sum(10,5)<<endl;  //This will also get called since c=0 by default
    cout<<sum(10,20,3)<<endl;
return 0;
}