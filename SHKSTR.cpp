        #include<bits/stdc++.h>
        #define l long int
        #define ll long long
        using namespace std;
         
        int main(){
        l n;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        l q;
        cin>>q;
        l r;
        string p;
        while(q--){
            cin>>r>>p;
            int pre=0,ind=0;
            for(int i=0;i<r;i++){
                int j=0;
                while(j<min(p.length(),s[i].length()) && p[j]==s[i][j]){
                    j++;
                }
                if(j>pre){
                    pre =j;
                    ind =i;
                }
                else if(j==pre){
                    if(s[ind]>s[i])
                        ind=i;
                }
            }
            cout<<s[ind]<<endl;
        }
        return 0;
        }  