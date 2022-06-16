#include<iostream>
using namespace std;

int main () { 

    int n,i, sum=0;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Factors of n are"<<endl;
    for ( i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            cout<<i<<endl;
            sum=sum+i;
        }

    }
    
          cout<<"Sum of its factors is"<<sum<<endl;
          if (sum==2*n)
          {
              cout<<"Given number is a perfect number"<<endl;

          }
          else
          {
              cout<<"Given number is not a perfect number"<<endl;
          }
          
    return 0;
}