#include<iostream>
using namespace std;
template<class T>

int main () { 
    cout<<maxim(12,14)<<endl;
    cout<<maxim(2.3f,3.8f)
    return 0;
}
 T maxim ( T x,T y) //Using Template functions do not needs   defining data type of each parameter we can pass any data   type 
 {
    return x>y?x:y;
 }