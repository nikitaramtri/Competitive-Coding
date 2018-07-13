#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector <int> apples, vector <int> oranges) {
    // Complete this function
    int apoints = 0, bpoints = 0, i;
    for  (i = 0 ; i< apples.size();i++){
        if( a + apples[i] >= s && a + apples[i] <=t)
            apoints += 1;
    }
    for  (i = 0 ; i< oranges.size();i++){
        if( b + oranges[i] >= s && b + oranges[i] <=t)
            bpoints += 1;
    }
    
    cout<<apoints<<endl<<bpoints<<endl;
}

int main() {
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       cin >> orange[orange_i];
    }
    countApplesAndOranges(s, t, a, b, apple, orange);
    return 0;
}
