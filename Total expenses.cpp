#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	double m,n,k;
	cin>>m;
	while(m--){
	    cin>>n>>k;
	    if(n>1000){
	        double y=(n*k);
	        std::cout << std::fixed;
            std::cout << std::setprecision(6);
	        cout<<(y-y*.1)<<"\n";
	    }
	    else {
	        std::cout << std::fixed;
            std::cout << std::setprecision(6);	        
	        cout<<(n*k)<<"\n";}
	}
	return 0;
}
