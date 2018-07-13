    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define l long int
    int main() {
        l t,n,i,j,k,m;
        ll sumt,sump,d,sumpi;
        int s;
        cin>>t;
        for(i=0;i<t;i++){
            cin>>n;
            ll a[n];
            sumt =0;
            for(j=0;j<n;j++){
                cin>>a[j];
                sumt+=a[j];
            }
            cout<<"1";
            for(k=2;k<=n;k++){
               if(sumt%k!=0){
                cout<<"0";
                
               }
                else{
                    
                    d=sumt/k;
                    sump=0;s=0;sumpi=0;
                    for(m=0;m<n;m++){
                        
                        if(a[m]==d){
                            if(s==0){
                             sump+=1;}
                             else{
                                 sump=-1;
                                 break;
                             }
                             
                        }
                        else{
                            sumpi+=a[m];
                            
                            if(sumpi<d){
                                s=1;}
                            else if(sumpi>d){
                                sump=-1;
                                 break;
                            }
                            else{
                                sump+=1;
                                sumpi=0;
                                s=0;
                            }
                        }
                    }
                    if(sump==-1 || sump!=k)
                    cout<<"0";
                    else if(sump==k)
                    cout<<"1";
                }
                
            }
            cout<<endl;
        }
        return 0;
    } 