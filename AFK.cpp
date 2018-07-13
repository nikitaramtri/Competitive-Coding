#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t,i;
    ll a,b,c, changes=0,m;
    cin>>t;
    for(i=0;i<t;i++){
        changes=0;
        cin>>a>>b>>c;
        if((b-a)==(c-b)){
            cout<<"0"<<endl;
            continue;
        }
        if(a==c){
            cout<<abs(b-a)<<endl;
            continue;
        }
        m = (abs(c-a))/2;
        if(c>a){
            if((c-a)%2!=0){
                changes+=1;
                changes += min(abs(a+1+m-b),abs(a+m-b));
            }
            else
                changes+=abs(a+m-b);
        }
        else{
            if((a-c)%2!=0){
                changes+=1;
                changes += min(abs(c+1+m-b),abs(c+m-b));
            }
            else
                changes+=abs(c+m-b);
        }
        cout<<changes<<endl;
    }
    return 0;
}