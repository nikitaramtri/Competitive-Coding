#include<iostream>
using namespace std;

int main()
{
    int n,tot=0,i;
    cin>>n;
    int t[n];
    for(i=0;i<n;i++)
    cin>>t[i];
    if(t[0]>15)
        tot=15;
    else{

    for(i=0;i<n-1;i++)
    if(t[i+1]-t[i]>15)
     {tot=t[i]+15;
     break;
      }
    }
    if(tot==0)
    {
        if(t[n-1]<75)
        tot=t[n-1]+15;
        else
        tot=90;
    }
    cout<<tot<<endl;
    return 0;
    
}