#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define int ll

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

#define INF INT_MAX
#define MOD 1000000007
#define all(x) x.begin(), x.end()

void SOLVE1(int P, int K, int Q){
	vi comp(P, -1); comp[0] = 0; int cc = 1;
	for(int u = 1; u < P; u++){
		if(comp[u] != -1) continue;

		int tmp = u;
		while(true){
			comp[tmp] = cc;
			
			tmp = (tmp*K)%P;
			if(tmp == u) break;
		}
		cc++;
	}

	vvi D(cc, vi(cc, INF));
	for(int u = 0; u < cc; u++)
		D[u][u] = 0;

	for(int u = 0; u < P; u++){
		int v = ((K*u)+1)%P;
		if(comp[u] != comp[v])
			D[comp[u]][comp[v]] = 1;
	}

	for(int i = 0; i < cc; i++)
		for(int j = 0; j < cc; j++)
			for(int k = 0; k < cc; k++)
				D[j][k] = min(D[j][k], D[j][i]+D[i][k]);
	
	while(Q--){
		int X, Y; cin >> X >> Y;
		cout << D[comp[X]][comp[Y]] << "\n";
	}
}

void SOLVE2(int P, int K, int Q){
	vi D(P, INF); D[0] = 0;
	deque<int> q; q.push_back(0);

	while(!q.empty()){
		int u = q.front(); q.pop_front();
		
		int v0 = (K*u)%P, v1 = (v0+1)%P;
		if(D[u]+0 < D[v0]){
			D[v0] = D[u]+0;
			q.push_front(v0);
		}
		if(D[u]+1 < D[v1]){
			D[v1] = D[u]+1;
			q.push_back(v1);
		}
	}

	while(Q--){
		int X, Y; cin >> X >> Y;
		
		int ans = INF, tmp = X;
		while(true){
			ans = min(ans, D[(Y-tmp+P)%P]);
			
			tmp = (tmp*K)%P;
			if(tmp == X) break;
		}
		cout << ans << "\n";
	}
}

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T; cin >> T;
	while(T--){
		int P, K, Q; cin >> P >> K >> Q;
		
		if(K%P == 0){
			while(Q--){
				int X, Y; cin >> X >> Y;
				if(X == Y) cout << 0 << "\n";
				else cout << Y << "\n";
			}
			continue;
		}

		ll R = 0, tmp = 1;
		while(true){
			R++; tmp = (tmp*K)%P;
			if(tmp == 1) break;
		}

		if((P-1)/R <= 500) SOLVE1(P, K, Q); // Dijkstra
		else SOLVE2(P, K, Q); // 0-1 BFS
	}

	return 0;
}