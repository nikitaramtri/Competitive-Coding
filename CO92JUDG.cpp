    #include<iostream>
    using namespace std;
    int summ(int a[], int n){
    int max = a[0], sum = 0;
    for(int i = 1;i<n;i++){
    if(a[i]>max){
    sum+=max;
    max= a[i];
    }
    else
    sum+=a[i];
    }
    return sum;
    }
    int main(){
    int t,i,j,suma,sumb,n;
    cin>>t;
    for(i=0;i<t;i++){
    cin>>n;
    int a[n],b[n];
    for(j=0;j<n;j++)
    cin>>a[j];
    for(j=0;j<n;j++)
    cin>>b[j];
    suma = summ(a,n);
    sumb = summ(b,n);
    if(suma>sumb)
    cout<<"Bob"<<endl;
    else if(suma<sumb)
    cout<<"Alice"<<endl;
    else
    cout<<"Draw"<<endl;
    }
    return 0;
    }   