#include<iostream>
using namespace std;

int main()  {
    int n,h,i,min=0;
    cin>>n>>h;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {    if(a[i]>h)
            min+=2;
         else
            min+=1;
    }
    cout<<min;
    return 0;
}