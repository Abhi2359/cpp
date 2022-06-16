#include<iostream>
using namespace std;

int main () { 
    string str;  // Of expandable size
    cout<<"Enter a string";
    getline(cin,str);
    cout<<str<<endl;

    cin>>str;
    cout<<str<<endl;
    cin>>str;   // here it will take another string and will store it simulatenously
    cout<<str<<endl;

    return 0;
}