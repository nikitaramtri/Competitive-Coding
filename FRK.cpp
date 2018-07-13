#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,count =0,j;
    cin>>n;
    char u[n][20];
    for(i=0;i<n;i++)
    cin>>u[i];
    for(i=0;i<n;i++){
        for(j=0;j<strlen(u[i])-1;j++){
            if((u[i][j]=='c' && u[i][j+1]=='h')||(u[i][j]=='h' && u[i][j+1]=='e')||(u[i][j]=='e' && u[i][j+1]=='f')){
            count++;
            break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}