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
	
	ifstream f("27-76b.txt");
	
	int n;
	int k[3][2] = {0};
	int buf;
	int s = 0;
	int c = 0;
	
	f >> n;
	f >> buf;
	
	for (int i = 0; i < n-1; i++)
	{
		int x;
		s += buf;
		
		f >> x;
		c += k[(3 - x % 3) % 3][s % 2];
		
		k[buf%3][s%2] += 1;
		buf = x;
	}
	
	cout << c;
	
	
	return 0;
}
