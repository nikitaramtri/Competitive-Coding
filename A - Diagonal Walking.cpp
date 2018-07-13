#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
    vector<char> v;
    char a;
    cin>>a;
    v.push_back(a);
    int t=0;
	for(int i = 1; i<n ; i++)
	{
	    cin>>a;
	    if(((a=='U' && v[i-t-1]=='R') || (a=='R' && v[i-t-1]=='U')))
	    { 
	        v.pop_back();
	        v.push_back('D');
	        t++;
	    }
	    else
	        v.push_back(a);
	  
	}
	cout<<v.size();
	return 0;
}