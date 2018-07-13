#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    int i,j,sum,count=0;
    for( i=0;i<s.size()-m+1;i++){
        sum=0;
        for(j=0;j<m;j++){
            sum+=s[j+i];
        }
        if(sum==d)
            count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
