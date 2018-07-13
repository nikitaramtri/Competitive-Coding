#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    int max=1,in=ar[0];
    vector<int> a;
    for(int i=1;i<ar.size();i++){
        a.push_back(0);
    }
    for(int j=0;j<ar.size();j++){
        a[ar[j]-1]++;
        if(a[ar[j]-1]>max){
            max =a[ar[j]-1];
            in=ar[j];
        }
        else if(a[ar[j]-1]==max){
            if(ar[j]<in)
                in = ar[j];
        }
    }
    return in;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
