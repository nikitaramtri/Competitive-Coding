#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,i,j;
    cin>>n>>m;
    int c[m];
    vector<int> count;
    for(j=0;j<n;j++){
        count.push_back(0);
    }
    for(i=0;i<m;i++){
        cin>>c[i];
        count[c[i]-1]++;
    }
    sort(count.begin(),count.end());
    cout<<count[0]<<endl;
    
    return 0;
}