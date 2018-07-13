#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
//#define INT_MIN -10000

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    int max, max_sum = -1000, i, j, k, l;
    for(i = 0; i < 4; i ++){
        for(j = 0; j < 4; j ++){
            max = 0;
            for( k = i; k< i+3; k = k+2){
                for(l = j; l < j+3; l++)
                    max += arr[k][l];
            }
            max += arr[k-3][l-2];
            if(max_sum < max)
                max_sum = max;
        }
    }
    cout<<max_sum;
    return 0;
}
