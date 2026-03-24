#include <bits/stdc++.h>

using namespace std;

int main()
{
	int h, w;
	long long ans = 0;
	string str = "LANQIAO";
	int strIndex;

	cin >> h >> w;
	for (int i = 0; i < h; ++i)
	{
		strIndex = i % 7;
		for (int j = 0; j < w; ++j)
		{
			if (strIndex >= str.size())
			{
				strIndex = 0;
			}
			if (str[strIndex++] == 'A')
			{
				ans++;
			}
		}
	}

	cout << ans;

	return 0;
}
