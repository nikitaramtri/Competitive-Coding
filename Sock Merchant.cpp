#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    int count =0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(ar[j]==ar[i]){
                count++;
                ar[j]=0;ar[i]=0;
                break;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
