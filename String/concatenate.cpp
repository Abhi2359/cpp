#include<iostream>
#include<cstring>
using namespace std;

int main () { 
    char s1[20]= "Good";
    char s2[20]="Morning";
     strcat(s1,s2); //strcat(destination,source)
     cout<<s1<<endl; // GoodMorning
   strncat(s1,s2,4);  //strncat(destination,source,length)
    cout<<s1<<endl;   //GoodMorn
    return 0;
}