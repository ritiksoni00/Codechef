#include <bits/stdc++.h>
using namespace std;
std::vector<int> j;
int t,n,k,x;
int sum=0,sum1=0;
int main() {
	// your code goes here
	cin>>t;
	while(t--){
	    int t,n,k,x;
        int sum=0,sum1=0;
	    cin>>n>>k;
	    for(int i=0;i<n;i++){
	   cin>>x;
	        sum+=x;
	        if(x>k){
	           x=k;}
	           sum1+=x;}
	       
	    
	 
	    cout<<sum-sum1<<"\n"; 
	}
	
	
	return 0;
}
