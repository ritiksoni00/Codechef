#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int c,j;
	
	cin>>j;
	while(j--)
	{
	    
	    cin>>c;
	    int k=1;
	    for(int y=c;y>0;y--){
	        
	        k*=y;}
	    std::cout << k << std::endl;
	}
	return 0;
}
