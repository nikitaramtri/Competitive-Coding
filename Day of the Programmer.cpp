#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    if(year<=1917){
        if(year%4==0)
            return "12.09."+to_string(year);
        else
            return "13.09."+to_string(year);
    }
    else if(year>=1919){
        if(year%400==0||(year%4==0 && year%100!=0))
            return "12.09."+to_string(year);
        else
            return "13.09."+to_string(year);
    }
    else{
        return "26.09."+to_string(year);
    }
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
