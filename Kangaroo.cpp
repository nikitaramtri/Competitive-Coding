#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    string result;
    int ans = (x1-x2)/(v2-v1);
    if(v1==v2){
        if(x1==x2)
            result = "YES";
        else
            result = "NO";
        return result;
    }
    if(x1>x2){
        if(((x1-x2)%(v2-v1)==0 ) && x2+(v2*ans)>x1)
            result = "YES";
        else
            result = "NO";
    }
    else{
        if(((x1-x2)%(v2-v1)==0 ) && x1+(v1*ans)>x2)
            result = "YES";
        else
            result = "NO";
    }
    
    return result;
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
