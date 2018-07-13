#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s) {
    int dt=0, valley=0,count =0;;
    for(int i =0;i<n;i++){
        if(s[i]=='U'){
            dt++;
            if(dt==0 && valley==1){
                count++;
                valley=0;
            }
        }
        else{
            if(dt==0)
                valley =1;
            dt--;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = countingValleys(n, s);
    cout << result << endl;
    return 0;
}
