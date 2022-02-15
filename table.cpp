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
	
	freopen("f.txt", "r", stdin); // 11493372 4877
	
	int n; cin >> n;
	double sum = 0;
	int mx = 0;
	
	vector< vector<int> > a(20);
	
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		
		if (x % 500 == 0)
			a[x / 500 - 1].emplace_back(x);
		
		else
			a[x / 500].emplace_back(x);
	}
	
	for (int i = 0; i < 20; i++)
	{
		sort(a[i].begin(), a[i].end());
		
		for (int j = 0; j < a[i].size() / 2; j++)
		{
			sum += 0.5 * (double)a[i][j];
			
			if (a[i][j] * 0.5 > mx)
				mx = (double)a[i][j] * 0.5;
		}
	}
	
	cout << (ll)sum << ' ' << mx;
	
	
	return 0;
}
