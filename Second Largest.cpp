#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int j;
	cin>>j;
	
	while(j--){
	    
        int a,b,c;
        cin>>a>>b>>c;
        
        if(a>b && c>a || a>c && a<b)
        cout<<a<<endl;
        
        else if(b>a && c>b || b>c && a>b)
        cout<<b<<endl;
        
        else if(c>a && b>c || c>b && a>c)
        cout<<c<<endl;
	}
	return 0;
}
