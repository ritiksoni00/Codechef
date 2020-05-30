#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t-->0)
	{
		cin>>a>>b>>c;
		if(a+b+c==180)
		cout<<"YES";
		else
		cout<<"NO";
		cout<<endl;
	}
	return 0;
}
