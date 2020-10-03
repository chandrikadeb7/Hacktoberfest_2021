#include<bits/stdc++.h>
using namespace std;

int n, m;
char s[1001][1001];
char a[1001][1001];

int weird() {
	int res = INT_MIN;
	for(int i = 0; i<n; i++) {
		int cnt = 0;
		for(int j = 0; j<m; j++) {
			if(a[i][j] == '#') {
				a[i][j] = '$';
				if(a[i+1][j] == '#') a[i+1][j] = '$';
				cnt += 1;
			}
			else if(a[i][j] == '$') {
				if(a[i+1][j] == '#')
				a[i+1][j] = '$';
				
				res = max(res, cnt);
				cnt = 0;
			}
			else if(a[i][j] == '.') {
				res = max(res, cnt);
				cnt = 0;
			}
		}
		res = max(res, cnt);
	}
	return res;
}

int main() {
	int t; cin>>t;
	while(t--) {
		cin>>n>>m;

		for(int i = 0; i<n; i++)
			for(int j = 0; j<m; j++) cin>>s[i][j];

		
		// case I
		for(int i = 0; i<n; i++)
			for(int j = 0; j<m; j++) a[i][j] = s[i][j];
			
		int res = weird();
		
		// case II
		for(int i = n-1; i>=0; i--)
			for(int j = 0; j<m; j++) a[n-i-1][j] = s[i][j];
		
		res = max(weird(), res);

		// case III
		for(int i = 0; i<m; i++)
			for(int j = 0; j<n; j++) a[i][j] = s[j][i];
			
		res = max(weird(), res);

		// case IV
		for(int i = m-1; i>=0; i--)
			for(int j = 0; j<n; j++) a[m-i-1][j] = s[i][j];

		res = max(weird(), res);

		cout<<res<<endl;
	}
}
