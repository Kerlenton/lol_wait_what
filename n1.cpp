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
	
	ifstream f("27-74b.txt");
	
	int n;
	
	f >> n;
	
	vector<int> a(n);
	
	for (int i = 0; i < n; i++)
		f >> a[i];
	
	ll c = 0;
	
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		
		for (int j = i; j < i + 20; j++)
		{
			
			if (j > n)
				break;
			
			sum += a[j];
			
			if (sum % 39 == 0)
			{
				++c;
			}
		}
	}
	
	cout << c;
	
	return 0;
}
