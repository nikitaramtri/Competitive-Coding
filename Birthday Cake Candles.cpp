#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long int


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll n,i,num=1;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    i=n-2;
    while(a[i]==a[n-1] && i>=0){
        num++;
        i--;
    }
    cout<<num;
    
    return 0;
}
