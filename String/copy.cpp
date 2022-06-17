#include<iostream>
#include<cstring>
using namespace std;

int main () { 
    string s="Welcome";
    char str[10];
    s.copy(str,3); // copy(array in which it is copied, index upto which it is copied)
    str[3]='/0';
    cout<<str<<endl;
    string s1= "How are you";
   cout<< s1.find("a")<<endl;  // To find index of string or character in string
   string s2="Hello brother";
    cout<<s2.rfind("r")<<endl;  // find index in reverse order
   string s3= "Hey Sweetheart";
   cout<<s3.find_first_of("e")<<endl;
    //find_first_of(char,from index which starts searching) // find index from leftmost side // outputs 1
    cout<<s3.find_first_of("ey")<<endl; //will either find e or y 
   string s4="I am coming";
   cout<<s4.find_last_of("m")<<endl;  // same property as of  find_first// find index from rightmost side // 
   
    
    return 0;
}