    #include <bits/stdc++.h>
    #define l long int
    #define ll long long
     
    using namespace std;
     
    int main() {
        ios_base::sync_with_stdio(false);
          cin.tie(NULL); 
        l t;
        double px,py,pz,qx,qy,qz,dx,dy,dz,cx,cy,cz,r;
        cin>>t;
        while(t--){
            cin>>px>>py>>pz>>qx>>qy>>qz>>dx>>dy>>dz>>cx>>cy>>cz>>r;
            double d = pow(px-cx,2)+pow(py-cy,2)+pow(pz-cz,2)-pow(r,2);
            double a = pow((dx*(px-cx))+(dy*(py-cy))+(dz*(pz-cz)),2)-(d*(pow(dx,2)+pow(dy,2)+pow(dz,2)));
            double b = (2*(((px-cx)*dx)+((py-cy)*dy)+((pz-cz)*dz))*(((px-cx)*(qx-px))+((py-cy)*(qy-py))+((pz-cz)*(qz-pz))))-(2*d*(((qx-px)*dx)+((qy-py)*dy)+((qz-pz)*dz)));
            double c = pow(((px-cx)*(qx-px))+((py-cy)*(qy-py))+((pz-cz)*(qz-pz)),2)-(d*(pow(qx-px,2)+pow(qy-py,2)+pow(qz-pz,2)));
            
            
            if(a){
                double s = pow(pow(b,2)-(4*a*c),0.5);
                double t1 = (-b+s)/(2*a);
                double t2 = -(b+s)/(2*a);
                if(t1>0 && t2>0)
                    cout<<fixed<<setprecision(10)<<min(t1,t2)<<endl;
                else if(t1>0)
                    cout<<fixed<<setprecision(10)<<t1<<endl;
                else
                    cout<<fixed<<setprecision(10)<<t2<<endl;
            }
            else{
                double t3 = -c/b;
                cout<<fixed<<setprecision(10)<<t3<<endl;
            }
        }
        return 0;
    } 