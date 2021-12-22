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
	
	ifstream f("27-78a.txt");
	
	ll n;
	ll s = 0;
	ll x;
	ll ms = 0;
	
	ll dp[73][37] = {(ll)1e9};
	
	cin >> n;
	cin >> x;
	
	dp[x % 73][0] = 0;
	//s += x;
	
	for (ll i = 1; i < n; i++)
	{
		ll y;
	    cin	>> y;
		
		s += x;
		
		
		if (dp[(73 - y % 73) % 73][(s + y) % 37] != (ll)1e9)
		{
			if (ms < s - dp[(73 - y % 73) % 73][(s + y) % 37])
				ms = s - dp[(73 - y % 73) % 73][(s + y) % 37];
		}
		
		if (dp[y % 73][s % 37] > s)
			dp[y % 73][s % 37] = s;
		
		x = y;
	}
	
	
	cout << ms;
	
	
	return 0;
}
