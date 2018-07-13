    #include<iostream>
    using namespace std;
    int max(long int arr[], int size){
    int i;
    int num = arr[i];
    for(i = 1; i< size;i++)
    	if(arr[i]>num)
    		num = arr[i];
    return num;
    }
    int main(){
    int t, n, i, j;
    long int c,d,s;
    cin>>t;
    for(i =0;i<t;i++){
    cin>>n;
    long int a[n];
    for(j =0;j<n;j++)
    cin>>a[j];
    cin>>c>>d>>s;
    cout<<max(a,n)*(c-1)<<endl;
    }
    return 0;
    }  