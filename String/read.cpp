#include<iostream>
using namespace std;

int main () { 
    char s[100];
    cout<<"Enter your name "<<endl;
    cin>>s;   // This reads only single word
// cin.get(s,100) or cin.getline(s,100);  This will print morethan a word with space
// We use cin.ignore() while using cin.get() to get another characters or simply cin.getline()
    cout<<"Welcome "<<s<<endl;



    return 0;
}