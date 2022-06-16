#include<iostream>
using namespace std;
enum day {mon,tue,wed,thu,fri,sat,sun};
/* can do like enum day {mon=1,tue,wed,thu,fri,sat,sun} then tue will automatically take 2 and so on*/


int main () { 
    day d;
    d=mon;
    cout<<d<<endl;  
    //also
    cout<<mon<<endl;
    //can't modoify like mon++ because all these are 
    //set of constant under tyhe name DAY

    
    

}