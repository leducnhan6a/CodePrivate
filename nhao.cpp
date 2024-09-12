#include<bits/stdc++.h>
using namespace std;

const int maxn =10001;
int n,m;
vector<pair<int,int>> adj[maxn];

void dijkstra(int s){
	vector<long long> d(n+1, 0x3f);
	d[s]=0;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	pq.push({0,s});
	while (!pq.empty()){
		pair<int, int>  top = pq.top();pq.pop();
		long long u = top.first;
		long long kc = top.second;
		if (kc > d[u]) continue;
		//relaxation
		for (auto it: adj[u]){
			long long v=it.first;
			long long w=it.second;
			if (d[v]>d[u]+ w) d[v] = d[u]+w;
			pq.push({v,d[v]});
		}
			for (int i = 1; i <=n; i++)
	{
		cout << d[i]<< ' ';
	} cout <<endl;
	
	}
	
}


int main(){
	cin >> n>>m ;
	for (int i = 0; i < m; i++)
	{
		long long a,b,c; cin >>a>>b>>c;
		adj[a].push_back({b,c});

	}

	dijkstra(1);
	
	return 0;
}