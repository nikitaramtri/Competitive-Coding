        #include <bits/stdc++.h>
        #define ll long long
        #define MAX 1000000007
        using namespace std;
        int arr[5000],n,r;
        ll total =1;
         
        void combinationUtil(ll prod, int start, int end, int index)
        {
            if(index==r){
                    //prod= pow(prod,end-start+1);
                    //prod= prod%MAX;
                    total = (total * prod)%MAX;
                    return;
                }
         
            for (int i=start; i<=end && end-i+1 >= r-index; i++)
            {
                ll temp= prod;
                if(index!=0 && index!=r-1){
                 temp  = (prod * arr[i])%MAX;
                //cout<<prod<<";";
                }
                
               combinationUtil( temp, i+1, end, index+1);
            }
        }