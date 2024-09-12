#include <bits/stdc++.h>
using namespace std;

int n,m; 
vector <int> adj[100];
bool visited[1001];
vector <int> topo;
int in[1001];

void inp()
{
    cin >> n>> m;
    for (int i = 0; i < m; i++)
    {
        int x,y; cin >> x>> y;
        adj[x].push_back(y);
        in[y]++;
    }
    memset(visited,false,sizeof(visited));
}

void kahn()
{
    queue <int> q;
    for (int i = 1; i <= n; i++)
    if (in[i]==0)
    {
        q.push[i];
    }
    while (q.empty()==false)
    {
        int u = q.front();
        q.pop();
        topo.push_back(u)
        for (int v : adj[u])
        {
            in[v]--;
            if (in[v]==0) q.push(v);
        }
    }
    reverse(topo.begin(), topo.end());
    for (int x: topo) 
    cout << x<< " ";
}

void dfs(int u)
{
    visited[u]=true;
    for (int x: adj[u])
    if (visited[x]==false) dfs(x);
    topo.push_back(u); 
}

int main()
{
    inp();
    kahn();
    
    return 0;
}
