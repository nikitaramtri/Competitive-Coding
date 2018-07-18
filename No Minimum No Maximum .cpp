                #include <bits/stdc++.h>
                #define ll long long
                #define MAX 1000000007
                using namespace std;
                // int arr[5000],n,r;
                // ll total =1;
                
                 
                // void combinationUtil(ll prod, int start, int end, int index)
                // {
                //     if(index==r){
                //             //prod= pow(prod,end-start+1);
                //             //prod= prod%MAX;
                //             total = (total * prod)%MAX;
                //             return;
                //         }
                 
                //     for (int i=start; i<=end && end-i+1 >= r-index; i++)
                //     {
                //         ll temp= prod;
                //         if(index!=0 && index!=r-1){
                //          temp  = (prod * arr[i])%MAX;
                //         //cout<<prod<<";";
                //         }
                        
                //       combinationUtil( temp, i+1, end, index+1);
                //     }
                // }
               
                int main()
                {
                    ios_base::sync_with_stdio(0);
                    cin.tie(0);
                    cout.tie(0);
                    
                    int t;
                    cin>>t;
                    
                    while(t--){
                        int n, k;
                        cin>>n>>k;
                        int arr[n];
                        for(int i=0;i<n;i++)
                            cin>>arr[i];
                        sort(arr, arr + n);
                        ll total=1;
                    //     //int data[r];
                 
                    // // Print all combination using temprary array 'data[]'
                    //     combinationUtil(1, 0, n-1, 0);
                    //     //printCombination(arr, n, k);
                    //     // int combinationsArray[k];
                    //     // combinationCount(combinationsArray, 0, n-1, 0);
                     std::string bitmask(k, 1); // K leading 1's
                    bitmask.resize(n, 0); // N-K trailing 0's
                
                    // print integers and permute bitmask
                    do {
                        ll prod = 1;
                        int ind =0;
                        for (int i = 0; i < n; ++i) // [0..N-1] integers
                        { 
                            if (bitmask[i]) {
                                if(ind !=0 && ind!=k-1 ){
                                    prod*=arr[i];
                                    if(prod>MAX)
                                        prod%=MAX;
                                }
                                 
                                 ind++;
                                 if(ind == k)
                                    break;
                            }
                            
                        }
                        total *=prod;
                        if(total>MAX)
                            total%=MAX;
                        //std::cout << std::endl;
                    } while (std::prev_permutation(bitmask.begin(), bitmask.end()));
                        
                        cout<<total<<endl;
                    }
                    return 0;
                }    