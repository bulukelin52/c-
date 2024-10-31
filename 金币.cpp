#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s = 0, t = 0, n;
	cin >> n;
	for (int i = 1;; i++)
	{
		for (int j=1;j<=i;j++)
		{
			s += i;
			t++;
			if (t==n)
			{
				cout << s;
				return 0;
			}


		}
		
	}
	return 0;
}