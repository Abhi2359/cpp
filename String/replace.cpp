#include<iostream>
using namespace std;

int main () { 
    string str ="programming";
    str.replace(3,4,"k"); // replace(index,no of letters to replaced, replacing string)
    cout<<str<<endl;
    str.push_back('H');  // Only single alphabets can be taken
    cout<<str<<endl;   //programmingH
    string str1="Hello world";
    str1.pop_back();  // Cut off the last letters like backspace
    cout<< str1;  // Hello worl
    return 0;
}