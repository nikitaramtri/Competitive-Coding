    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
     
    int main(){
    int t,n, m,i,j,k;
     
    cin>>t;
    while(t--){
    cin>>n>>m;
    ll a[n][m];
    for(j=0;j<n;j++){
    for(k=0;k<m;k++)
    	cin>>a[j][k];
    }
     if(a[0][0]==-1)
     a[0][0]=1;
    for(i = 0;i<n;i++){
    for(j=0;j<m;j++){
    if(i==0){
        if (a[i][j]==-1)
        a[i][j] = a[i][j-1];
    }
    else{ 
        if(a[i][j]==-1){
    if(j==0)
    a[i][j] = a[i-1][j];
    else
    a[i][j] = max(a[i-1][j],a[i][j-1]);
    }
    }
    }
    }
    int status = 1;
    for(i=0;i<n;i++){
    for(j=0;j<m-1;j++)
    if(a[i][j]> a[i][j+1])
    status = 0;
    }
     
    if(status){
    for(i=0;i<n-1;i++){
    for(j=0;j<m;j++)
    if( a[i][j]>a[i+1][j])
    status = 0;
    }
     
    if(status){
    for(i=0;i<n;i++){
    for(j=0;j<m;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
    }
    }
    else{
    cout<<"-1"<<endl;
    }
    }
    else
    cout<<"-1"<<endl;
    }
    return 0;
    }  