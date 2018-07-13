#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char string1[12],string2[10];
    int i,j; 
    cin>>string1;
    if(string1[8]=='A'){
        if(string1[0]=='1' && string1[1]=='2')
        {string1[0]='0';
         string1[1]='0';
        }
        
    }
    else{
        if(!(string1[0]=='1' && string1[1]=='2')){
            if(string1[0]=='0' && string1[1]!='8' && string1[1]!='9' ){
                string1[0]='1';
                string1[1]+=2;
            }
         else if(string1[0]=='0' && string1[1]=='8'){
             string1[0]='2';
             string1[1]='0';
         }
         else if(string1[0]=='0' && string1[1]=='9'){
             string1[0]='2';
             string1[1]='1';
         }
         else{
             string1[0]='2';
             string1[1]+=2;
         }  
                
                 }
                 } 
                 
    for(i=0;i<8;i++)
            string2[i]=string1[i];
    for(i=0;i<8;i++)
    cout<<string2[i];
    
    return 0;
}
