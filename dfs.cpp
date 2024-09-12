#include <bits/stdc++.h>
using namespace std;

vector <int> adj[1001];
bool visited[1001];

void inp()
{
    int n,m; cin >>n>>m;
    for (int i = 0; i < m; i++)
    {
        int x,y;cin >>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));  
}

void dfs(int u)
{
    visited[u]==true;
    for (int x: adj[u])
    if (visited[x]==false) dfs(x);
}


int main()
{
    inp();
    dfs(1);
    
    return 0;
}