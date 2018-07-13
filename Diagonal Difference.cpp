#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int diff(int a, int b){
    if(a>b)
        return a-b;
    else
        return b-a;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,sumd1=0,sumd2=0;
    cin>>n;
    int a[n][n];
    for(i = 0; i < n; i ++)
    {
        for(j = 0;j<n;j++)
            cin>>a[i][j];
        
    }
    
    for(i=0;i<n;i++)
        sumd1+=a[i][i];
    for(i=0,j=n-1;i<n;i++,j--)
        sumd2+=a[i][j];
    cout<<diff(sumd1,sumd2)<<endl;
    return 0;
}
