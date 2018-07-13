#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i;
    float pos=0,neg=0,non=0;
    float pos_nos,neg_nos,non_nos;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        if(a[i]>0)
            pos=pos+1;
        else if(a[i]<0)
            neg=neg+1;
        else
            non=non+1;
    pos_nos=pos/n;
    neg_nos= neg/n;
    non_nos=non/n;
    cout<<pos_nos<<endl;
    cout<<neg_nos<<endl;
    cout<<non_nos<<endl;


    return 0;
}
