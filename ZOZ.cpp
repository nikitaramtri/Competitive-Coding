    #include <bits/stdc++.h>
    using namespace std;
    #define l long int
    #define ll long long
    int main() {
        l t,i,n,j,count;
        ll k,sum;
        cin>>t;
        for(i=0;i<t;i++){
            cin>>n>>k;
            ll a[n];
            sum =0;
            count=0;
            for(j=0;j<n;j++){
                cin>>a[j];
                sum+=a[j];
            }
            for(j=0;j<n;j++){
                if((a[j]+k)>(sum-a[j]))
                count++;
            }
            cout<<count<<endl;
        }
        return 0;
    } 