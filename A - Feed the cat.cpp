#include <bits/stdc++.h>
using namespace std;

int main() {
    int hh, mm;
    double result1,result2;
    cin>>hh>>mm;
    int h,d,n;
    double c;
    cin>>h>>d>>c>>n;
    if(hh>=20){
        if(h%n!=0)
            cout<<fixed<<setprecision(4)<<((h/n)+1)*c*0.8<<endl;
        else
            cout<<fixed<<setprecision(4)<<(h/n)*c*0.8<<endl;
    }
    else{
        result1= (h/n)*c;
        result2 = ((h + ((20-hh)*60 -mm)*d)/n)*c*0.8;
        if(h%n!=0)
            result1 = ((h/n) +1)*c;
        if((h + ((20-hh)*60 -mm)*d)%n!=0)
            result2 = (((h + ((20-hh)*60 -mm)*d)/n)+1)*c*0.8;
        if(result1<=result2)
            cout<<fixed<<setprecision(4)<<result1<<endl;
        else
            cout<<fixed<<setprecision(4)<<result2<<endl;
    }
	return 0;
}