#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	int cnt[601];
	memset(cnt, 0, sizeof(cnt));
	for(int i=1; i<=n; ++i) {
		int a;
		cin >> a;
		cnt[a]++;
	}
	int ans=0;
	for(int i=1; i<=600; ++i)
		if(cnt[i])
			ans++;
	cout << ans << "\n";
}
