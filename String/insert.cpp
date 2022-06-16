#include<iostream>
using namespace std;

int main () { 
    string str= "Hello" ;
    str.insert(3,"kk");  // Insert kk at index 3 of string str
    cout<<str<<endl;
    str.insert(3,"Apple",2); //Insert first 2 letters of apple at index 3 ofstring str
    cout<<str;
    return 0;
}