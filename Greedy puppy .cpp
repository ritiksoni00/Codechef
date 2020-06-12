//@rtk
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,la;
    cin>>t;
    while(t--){
        int mx=0,n,k;
        cin>>n>>k;
        for(la=2;la<=k;la++){
            int r=n%la;
            if(mx<r)
                mx=r;
        }
        cout<<mx<<"\n";

}
	return 0;
}
