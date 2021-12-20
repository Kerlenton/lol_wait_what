#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <utility>
#include <cstring>
#include <queue>
#define ll long long
 
using namespace std;
 
const ll MOD = 998244353;
const ll INF = 1000000000;



int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	ifstream f("27-75a.txt");
	
	int n;
	ll ms = 0;
	ll ml = 0;
	
	ll s = 0;
	
	vector<int> minps(39, 1e8);
	vector<int> minpl(43, 0);
	
	f >> n;
	
	for (int i = 0; i < n; i++)
	{
		ll x;
		f >> x;
	
		s += x;
		
		ll r = s % 43;
		
		if (r == 0)
		{
			ms = s;
			ml = i + 1;
		}
		
		else
			if (minps[r] != 1e8)
			{
				int m = s - minps[r];
				int l = i + 1 - minpl[r];
				if (m > ms || (m == ms && l < ml))
				{
					ms = m;
					ml = l;
				}
			}
			
		if (s < minps[r])
		{
			minps[r] = s;
			minpl[r] = i + 1;
		}
	}
	
	cout << ml;
	
	return 0;
}
