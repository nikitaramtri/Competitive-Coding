        #include <bits/stdc++.h>
        #define l long int
        #define ll long long
        using namespace std;
         
        int main()
        {
            ios_base::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            
            int t;
            cin>>t;
            
            while(t--){
                string s;
                cin>>s;
                l n = s.length();
               
                ll total =0;
                if(n==1){
                    cout<<"0"<<endl;
                    continue;
                }
                if(n==2){
                    if(s[0]<s[1]){
                        cout<<"1"<<endl;
                        continue;
                    }
                    else{
                       cout<<"0"<<endl;
                        continue; 
                    }
                }
                ll a[26][n-1] ;
                for(int j=0;j<26;j++ ){
                    
                    for(l i=0;i<n-1;i++)
                        a[j][i]=0;
                }
                //cout<<n<<" "<<a[5][2]<<endl;
                a[s[n-1]-'a'][n-2]+=1;
                for(l i = n-2;i>0;i--){
                    
                    for( int j =0;j<26;j++)
                        a[j][i-1]+=a[j][i];
                        
                    a[s[i]-'a'][i-1]++;
                }
                
                for(l i=0;i<n-1;i++){
                    
                    int ch = s[i]-'a';
                    for(int j=ch+1;j<26;j++ ){
                        total+=a[j][i];
                    }
                }
                
                ll maxsum1=0;
                
                if(total==0){
                    cout<<"0"<<endl;
                    continue;
                }
                
                
                
                ll b[26][n-1];
                for(int j=0;j<26;j++ ){
                    
                    for(l i=0;i<n-1;i++)
                        b[j][i]=0;
                }
                //cout<<n<<" "<<a[5][2]<<endl;
                b[s[0]-'a'][0]++;
                for(l i = 1;i<n-1;i++){
                    
                    for( int j =0;j<26;j++)
                        b[j][i]+=b[j][i-1];
                        
                    b[s[i]-'a'][i]++;
                }
                
                for(l i=0;i<n-1;i++){
                    
                    int ch = s[i]-'a';
                    ll sum=0;
                    
                    for(int j=ch+1;j<26;j++ ){
                        sum+=a[j][i];
                        ll sum1 =0;
                        if(i!=0){
                        for(int k = ch;k<j;k++)
                            sum1+=b[k][i-1];
                        }
                        if((sum-sum1-(j-ch))<=total)
                        maxsum1=max(maxsum1,(sum-sum1-(j-ch)));
                    }
                }
                
                ll maxsum2=0;
                for(l i=0;i<n-1;i++){
                    
                    int ch = s[i+1]-'a';
                    ll sum=0;
                    
                    for(int j=ch-1;j>=0;j-- ){
                        sum+=b[j][i];
                        ll sum1=0;
                        if(i!=(n-2)){
                        for(int k = j+1;k<=ch;k++)
                        sum1+=a[k][i+1];
                        }
                        if((sum-(ch-j)-sum1)<=total)
                        maxsum2=max(maxsum2,sum -(ch-j)-sum1);
                    }
                }
                l maxsum = max(maxsum1,maxsum2);
                //if((total-maxsum)>=0)
                cout<<total - maxsum<<endl;
                // else
                // cout<<total<<endl;
                
                
            }
            return 0;
        }  