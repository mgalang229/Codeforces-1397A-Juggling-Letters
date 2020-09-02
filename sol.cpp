#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> cnt(26);
		for(int i=0; i<n; ++i) {
			string s;
			cin >> s;
			for(char ch : s)
				++cnt[ch-'a'];
		}
		bool ans=1;
		for(int i=0; i<26; ++i)
			if(cnt[i]%n!=0) {
				ans=0;
				break;
			}
		cout << (ans ? "YES" : "NO") << "\n";
	}
}

