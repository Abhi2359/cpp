#include<iostream>
using namespace std;

int main () { 
    float billAmount,percentDiscount,finalPrice;
    cout<<"Enter the bill amount"<<endl;
    cin>>billAmount;
    if (billAmount>=500)
    {
        finalPrice = billAmount-billAmount*(20/100.0) ;


    }
    else if (billAmount>=100 && billAmount<500)

    {
        finalPrice = billAmount-billAmount*(10/100.0) ;

    }
    
    cout<<"Discounted price is "<<finalPrice<<endl;
    
    return 0;
}