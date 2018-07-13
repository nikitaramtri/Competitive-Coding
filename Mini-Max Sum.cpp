#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i;
    ll a[5],max_sum=0,min_sum=0;
    for(i=0;i<5;i++)
        cin>>a[i];
    sort(a, a+5);
    for(i=0;i<4;i++)
        min_sum+=a[i];
    for(i=1;i<5;i++)
        max_sum+=a[i];
    cout<<min_sum<<" "<<max_sum;
    return 0;
}
