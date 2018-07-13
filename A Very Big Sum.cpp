#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long int

ll aVeryBigSum(int n, vector <ll> ar) {
    // Complete this function
    ll sum=0;
    for(vector<ll>::iterator it = ar.begin(); it!= ar.end(); it++)
        sum += *it;
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<ll> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    long result = aVeryBigSum(n, ar);
    cout << result << endl;
    return 0;
}

