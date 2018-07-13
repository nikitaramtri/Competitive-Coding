#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    int result1 = 0,result2 = 0;
    vector<int> ar;
    if(a0>b0)
        result1 ++;
    if(a1>b1)
        result1 ++;
    if(a2>b2)
        result1 ++;
    if(b0>a0)
        result2 ++;
    if(b1>a1)
        result2 ++;
    if(b2>a2)
        result2 ++;
    ar.push_back(result1);
    ar.push_back(result2);
    return ar;
        
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}
