#include <bits/stdc++.h>

using namespace std;

int pickingNumbers(vector <int> a) {
    sort(a.begin(),a.end());
    int len,j, max =1;
    for(int i =0;i<a.size()-1;i++){
        len=1, j=i+1;
        while(j<a.size() && abs(a[j]-a[i]<=1)){
            len++;
            j++;
        }
        if(len>max)
            max = len;
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = pickingNumbers(a);
    cout << result << endl;
    return 0;
}
