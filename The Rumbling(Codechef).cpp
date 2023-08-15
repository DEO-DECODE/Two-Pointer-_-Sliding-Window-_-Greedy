#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x,y;
        cin>>n;
        string s;
        cin>>s;
        cin>>x>>y;
        long long coste[n],costw[n];
        //checking cost to convert into east or west respectively
        for(int i = 0; i < n; i++){
            if(s[i] == 'E') coste[i] = 0, costw[i] = 2*min(x,y);
            else if(s[i] == 'W') coste[i] = 2*min(x,y), costw[i] = 0;
            else if(s[i] == 'N') coste[i] = min(x,3*y), costw[i] = min(3*x, y);
            else if(s[i] == 'S') coste[i] = min(3*x,y), costw[i] = min(x, 3*y);
        }
        // for(int i=0; i<n; i++)
        // cout<<coste[i]<<" ";
        // cout<<endl;
        // for(int i=0; i<n; i++)
        // cout<<costw[i]<<" ";
        // cout<<endl;
        for(int j = 1;  j< n; j++){
            coste[j]=coste[j]+coste[j-1];
        }
        for(int j = n-2;  j>=0; j--){
            costw[j]=costw[j]+costw[j+1];
        }
        // for(int i=0; i<n; i++)
        // cout<<coste[i]<<" ";
        // cout<<endl;
        // for(int i=0; i<n; i++)
        // cout<<costw[i]<<" ";
        // cout<<endl;
        long long res=min(coste[n-1],costw[0]);
        for(int z=0; z<n-1; z++){
            res=min(res,coste[z]+costw[z+1]);
        }
        cout<<res<<endl;
    }
}
