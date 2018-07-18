    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;
     
    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int t,n,m;
        cin>>t;
        while(t--){
            cin>>n>>m;
            int a[n];
            int count=0;
            for(int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]%m==0)
                    count++;
            }
            if(n==0)
                cout<<"0"<<endl;
            else{
                ll s=pow(2,count)-1;
                cout<<s<<endl;
            }
        }
        return 0;
    } 