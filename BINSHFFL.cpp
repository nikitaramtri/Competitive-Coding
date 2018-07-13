    #include <bits/stdc++.h>
    #define l long int
    #define ll long long
    #define MAX 2000000000000000000
    using namespace std;
    int main() {
        ios_base::sync_with_stdio(false);
          cin.tie(NULL); 
        l t;
        ll a,b;
        cin>>t;
        
        while(t--){
            cin>>a>>b;
            if(a==b){
                cout<<"0"<<endl;
                continue;
            }
            if(a==0 && b==1){
                cout<<"1"<<endl;
                continue;
            }
            if(b==0||b==1){
                cout<<"-1"<<endl;
                continue;
            }
            
            
              
              ll s=1;
             ll n1=log2(a),n2=log2(b);
              l counta=0,countb=0;
              ll minn = MAX;
              while(s<=pow(2,n1)){
                  if(a&s){
                    counta++;
                    minn = min(s,minn);
                  }
                s*=2;
              }
             l counta0 =log2(minn); 
              s=1;
            minn=MAX;
              while(s<=pow(2,n2)){
                  if(b&s){
                    countb++;
                     minn = min(s,minn);
                  }
                s*=2;
              }
            l countb0 =log2(minn);  
            
        
            if(counta<countb)
                cout<<countb-counta+countb0<<endl;
            else if(counta >countb){
                if(counta-countb+1==countb0){
                    cout<<"1"<<endl;
                    continue;
                }
                if(counta-countb+1>=countb0-1)
                    cout<<"2"<<endl;
                else
                    cout<<countb0 - (counta-countb+1)+1<<endl;
            }
            else{
                    if(countb0==0)
                        cout<<"2"<<endl;
                    else
                        cout<<countb0<<endl;
                }
        }
        return 0;
    } 