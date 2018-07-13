#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    int count;
    if(p<=(n/2)){
        if(p%2==0)
            count = p/2;
        else
            count = (p-1)/2;
    }
    else{
        if(p%2==0)
            count = (n-p)/2;
        else
            count = (n-p+1)/2;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
