#include <bits/stdc++.h>
using namespace std;

string k;
int m,i;


int main() {
	// your code goes here
	cin>>m;
	while(m--){
	    cin>>k;
	    int n=0;
	    for(int i=0;i<(k.size()-1);i++){
	        if(k[i]!=k[i+1]){
	            n++;
	            i++;
	        }
	        
	        
	    }
	    cout<<n<<"\n";
	}
	return 0;
}
