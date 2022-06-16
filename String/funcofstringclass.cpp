#include<iostream>
using namespace std;

int main () { 
    string str="Hello";
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    cout<<str.capacity()<<endl;
    cout<<str.max_size()<<endl;
    str.resize(50);
    cout<<str.size()<<endl;
    str.clear();
    cout<<str<<endl;  //no output

    string str1 ="";
    if (str1.empty())    //if(true)
    {
        cout<<"String is Empty"<<endl;
    }
    
    else
    {
        cout<<"String is "<<str1<<endl;
    }
    
    return 0;
}