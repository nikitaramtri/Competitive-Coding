    #include<iostream>
    #include<string.h>
    using namespace std;
    int main(){
    int t, m,j ;
    long int x, n, k, sume, sumo,i;
    cin>>t;
    for(j=0;j<t;j++){
    cin>>n>>m>>x>>k;
    char s[k];
    cin>>s;
    if(n > m*x ||k<n){
    	cout<<"no"<<endl;
    	continue;
    	} 
    sume= 0, sumo=0;
    for(i = 0;i<k;i++)
    	if(s[i]=='E')
    		sume +=1;
    	else
    		sumo +=1;
    i=1;
    while(i<=m&&sume>=0&&sumo>=0){
    	if(i%2==0){
    	    if(sume>=x){
    	        sume-=x;
    	        n-=x;
    	    }
    	    else{
    	        n-=sume;
    	        sume =0;
    	    }
    	}
    	else{
    	    if(sumo>=x){
    	        sumo-=x;
    	        n-=x;
    	    }
    	    else{
    	        n-=sumo;
    	        sumo =0;
    	    }
    	}
    	
    	i++;
    }
    if(n<=0)
    	cout<<"yes"<<endl;
    else
    	cout<<"no"<<endl;
    }
    return 0;
    }   