#include <bits/stdc++.h>
using namespace std;
int seqlength(char s[], int n){
    int len;
    int status = 1;
    int j = 0;
    
    while(j<=((n/2)-2)){
        status = 1;
        for(int i = 0;i<((n/2) -j);i++){
            if(s[i]!=s[(n/2)-j+i]){
                
                status =0;
                break;
            }
        }
        if(status ==1){
            
            return ((n/2)-j);
        }
        j++;
    }
    return 0;
    
}
int main() {
	int n;
	cin>>n;
	char s[n];
	cin>>s;
	int num = seqlength(s,n);
	if(num){
	    
	    cout<<(n - num +1)<<endl;
	}
	else
	    cout<<n<<endl;
	return 0;
}