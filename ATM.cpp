#include <iostream>
using namespace std;

int main() {
	int amount;
	double balance;
	cin>>amount;
	cin>>balance;
	double pese;

	if(amount%5==0)
	{
	  if(amount<balance && (amount+0.5)<=balance)
	  {
	      pese=balance-(amount+(0.5));
	      std::cout << pese << std::endl;
	  }
	  else
	  {
	      cout<<balance<<endl;
	  }
	}
	else
	{
	    cout<<balance<<endl;
	}
	return 0;
}
