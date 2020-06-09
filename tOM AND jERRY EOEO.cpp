#include <bits/stdc++.h>

using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long cjs=0,js,ts;
	    cin>>ts;
	    if(ts%2==0){
	        while(ts%2==0){
	            ts/=2;}
	         while(ts>0){    
	           if(ts%2==0){
	               cjs++;
	           }
	           ts--;
	    }}
	   else{while(ts>0){    
	           if(ts%2==0){
	               cjs++;
	           }
	           ts--;
	       }}
	    
	    cout<<cjs<<"\n";
	}
	return 0;
}
