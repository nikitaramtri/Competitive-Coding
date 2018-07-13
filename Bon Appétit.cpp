#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#define ll long long
using namespace std;
int main() {
    int n, k;
    ll sum =0;
    cin>>n>>k;
    int c[n];
    for(int i =0;i<n;i++){
        cin>>c[i];
        sum+=c[i];
    }
    sum-=c[k];
    ll b;
    cin>>b;

    if(2*b>sum)
        cout<<(2*b-sum)/2<<endl;
    else
        cout<<"Bon Appetit"<<endl;
    
    return 0;
}
