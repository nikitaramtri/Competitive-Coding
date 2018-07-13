#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < long int > keyboards, vector < long int > drives, long int s){
    int i,j;
    long int max=-1;
    sort(keyboards.begin(),keyboards.end());
    sort(drives.begin(),drives.end());
    for(i=0;i<keyboards.size();i++){
        for(j=0;j<drives.size();j++){
            if(keyboards[i]+drives[j]>max && keyboards[i]+drives[j]<=s){
                max =keyboards[i]+drives[j];
        }
        }
    }
    return max;
}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<long int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<long int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    return 0;
}
