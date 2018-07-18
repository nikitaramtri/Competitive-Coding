    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;
     
    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int t;
        long int n, temp;
        cin>>t;
        
        while(t--){
            cin>>n;
            int temp= n/2;
            string p ="1 1";
            for(int i =0;i<temp;i++)
                p+="0";
           cout<<p<<endl;
            
            
        }
        return 0;
    } 