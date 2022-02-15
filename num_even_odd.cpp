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
#include <tuple>
#include <random>
#include <time.h>
#include <climits>
 
#define ll long long

using namespace std;
 
const ll MOD = 998244353;
const ll INF = 1000000000;

const ll N = (int)2e5;
const ll K = 448;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	freopen("f.txt", "r", stdin); // 15 954387771
	
	ll even = 0;
	ll odd = 0;
 
	set<ll> s;
	vector<ll> ev;
	vector<ll> od;
	
	
	ll n; cin >> n;
	
	for (ll i = 0; i < n; i++)
	{
		ll val;
		cin >> val;
		
		if (val % 2 == 0)
		{
			ev.emplace_back(val);
			s.insert(val);
			++even;
		}
		
		else
		{
			od.emplace_back(val);
			s.insert(val);
			++odd;
		}
	}
	
	ll k = 0;
	ll mx = 0;
	
	for (ll i = 0; i < even; i++)
	{
		for (ll j = 0; j < odd; j++)
		{
			if (s.count(ev[i] + od[j]))
			{
				++k;
				
				if (ev[i] + od[j] > mx)
					mx = ev[i] + od[j];
			}
		}
	}
	
	cout << k << ' ' << mx;
	
	return 0;
}
