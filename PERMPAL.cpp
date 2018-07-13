    #include<iostream>
    #include<string.h>
    using namespace std;
     
    int main(){
    int i ,t, j,k,n,temp, mid, ans,size;
    char s[100000], ch;
    cin>>t;
    for(i = 0;i<t;i++){
    cin>>s;
    n = strlen(s);
    size = n;
    ans =1;
    int p[n];
    for(k=0;k<n;k++)
    p[k] = k+1;
    for(j=0;j<n/2;j++){
    	ch = s[j];
    	k=j+1;
    	while(k<n-j&&s[k]!=ch)
    	k++;
    	if(k!=n-j){
    		temp = p[n-1-j];
    		p[n-1-j] = p[k];
    		p[k] = temp;
    		ch = s[n-1-j];
    		s[n-1-j] =s[k];
    		s[k] = ch;
    	}
    	else{
    	  
    		if(size%2!=0){
    		     // cout<<"0"<<endl;
    			mid = n/2;
    			temp = p[j];
    			p[j] = p[mid];
    			p[mid] = temp;
    			ch = s[j];
    			s[j] =s[mid];
    			s[mid] = ch;
    			size-=1;
    			j -=1;
    			//cout<<s<<endl;
    		}
    		else{
    		     // cout<<j<<"1"<<endl;
    			ans =0;
    			continue;
    		}
    	}
    }
    if(ans == 1){
    for(j=0;j<n;j++)
    cout<<p[j]<<" ";
    cout<<endl;
    }
    else{
    cout<<"-1"<<endl;}
    }
    return 0;
    } 