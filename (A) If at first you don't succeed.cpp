#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	int t=n-(a+b-c);
	if(t>=1 && c<=min(a,b) && n>=max(a,b))
	    cout<<t<<endl;
	else
	cout<<"-1"<<endl;
	return 0;
}