#include<bits/stdc++.h>
using namespace std;
int main() {
	int x;
	cin >> x;
	bool b1 = (x % 2 == 0), b2 = (x <= 12 && x > 4);
	if (b1 && b2) cout << "1 ";
	else cout << "0 ";
	if (b1 || b2) cout << "1 ";
	else cout << "0 ";
	if ((b1 && !b2) || (!b1 && b2)) cout << "1 ";
	else cout << "0 ";
	if (!b1 && !b2) cout << "1";
	else cout << "0";
	return 0;
}