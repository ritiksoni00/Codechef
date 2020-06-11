#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int m; 
		cin>>m;
	while(m--)
	{
	    int h , t;
	    double v;
	    cin>>h>>v>>t ;
	    if(h > 50 && v < 0.7 && t > 5600 )
	    {
	        cout << "10" << endl;
	    }
	    else if (h > 50 && v < 0.7)
	    {
	        cout << "9" << endl;
	    }
	    else if (t > 5600 && v < 0.7)
	    {
	        cout << "8" << endl;
	    }
	    else if (h > 50 && t > 5600)
	    {
	        cout << "7" << endl;
	    }
	    else if (h > 50 || v < 0.7 || t > 5600)
	    {
	        cout << "6" << endl;
	    }
	    else
	    {
	        cout << "5" << endl;
	    }
	}
	return 0;
}
