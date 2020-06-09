#include<bits/stdc++.h>

using namespace std;



int x;
int t, n, k;
int main() {
    cin >> t;
	while (t--) {
		int c5 = 0, c10 = 0, c15 = 0;
		cin >> k;
		int count = 0;
		x = k;         
		while (k--) {
			cin >> n;
			if (n == 5)
			{
				c5++;
				count++;
			} else if (n == 10 && c5 >= 1)
			{
				count++;
				c5--;
				c10++;
			} else if (n == 15 && c10 >= 1 )
			{

				count++;
				c10--;
			} else if (n == 15 && c5 >= 2)
			{
				count++;
				c5 = c5 - 2;
			}
		}

		if (count == x) {        
		    cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}
