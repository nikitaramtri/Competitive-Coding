#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,k;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=n-1-i;j>0;j--)
            cout<<" ";
        for(k=0;k<=i;k++)
            cout<<"#";
        cout<<endl;
    }
    
    return 0;
}
