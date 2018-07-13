    #include<bits/stdc++.h>
    #define l long int
    using namespace std;
     
    int main(){
    int t;
    l n,a,b;
    cin>>t;
    while(t--){
    	cin>>n>>a>>b;
    	l x[n];
    	l counta=0,countb=0;
    	for(l i=0;i<n;i++){
    		cin>>x[i];
    		if(x[i]==a)
    			counta++;
    		if(x[i]==b)
    			countb++;
    	}
    	float result = float(counta*countb)/(n*n);
    	cout<<fixed<<setprecision(10)<<result<<endl;
    }
    return 0;
    } 