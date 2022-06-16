#include<iostream>
#include<cstring>
using namespace std;

int main () { 
    string str ="Hello";
    cout<<str.capacity()<<endl;
    str.append("World vfsd zxnsdffjkg.,mcgnfdfnkvhrfuirecnjghmvnfdgjnvdiux.mntuktbnertnfbrtsdfgvbrfdbgr");  //Capacity increrases after appending larger string
      cout<<str.capacity()<<endl;
    cout<<str<<endl;
    return 0;
}