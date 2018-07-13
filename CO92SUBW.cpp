    #include<iostream>
    using namespace std;
     
    long long int a[100000];
    void calc(){
    a[0] =1;
    for(long long int i = 1;i<100000;i++)
    a[i] = a[i-1] +i+1;
    }
     
    int main(){ 
    calc();
    int t, i;
    long long int x, ind,result = 1;
    cin>>t;
    for(i=0;i<t;i++){
        result = 1;
    cin>>x;
     
    ind = 0;
    while(a[ind]<x)
    ind++;
     
     result +=ind;
     
    if(a[ind] != x){
       
    if((a[ind]-x)<=(x -a[ind-1]-1))
    result += a[ind]-x;
    else
    result += x-a[ind-1]-1;
    }
    cout<<result<<endl;
     
    }
    return 0;}    