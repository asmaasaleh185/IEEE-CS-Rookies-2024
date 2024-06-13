#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
    cin >> n>> m;
	string s;
	cin >> s;

	int k = (s[2] - '0') * 10 + s[3] - '0';

	map<string, int> skills;
	while (n--)
	{
		int x;
        cin >> s>> x;
		x = x * k / 100;

		if (x >= 100)
		{
			skills[s] = x;
		}
	}

	while (m--)
	{
		cin >> s;
		if (skills.find(s) == skills.end())
		{
			skills[s] = 0;
		}
	}
	cout << skills.size() << '\n';
	for (auto &e : skills)
	{
		cout << e.first<< ' '<< e.second<< '\n';
	}
	return 0;
}
