#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a[5],l=0;
        for(int i=0;i<5;i++){
            cin>>a[i];
        }
        int p;
        cin>>p;
        for(int i=0;i<5;i++){
            l += (p*a[i]);
        }
        if(l>5*24){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
    }
    
    
    
    return 0;
}
