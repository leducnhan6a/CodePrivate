#include <bits/stdc++.h>
using namespace std;

int n,m,s,t;
vector <int> adj[1001];
bool visited[1001];
int parent[1001];
    


void dfs(int u)
{
    visited[u]=true;
    for (int x: adj[u])
    if (visited[x]==false) 
    {
        parent[x]=u;
        dfs(x);
    }
}


void Path(int s, int t)
{
    memset(visited, false, sizeof(visited));
    memset(parent,0,sizeof(parent));
    dfs(s);
    if (visited[t]==false) cout <<"Khong co duong di!"<<endl;
    else 
    {
        vector <int> path;
        while (t!=s)
        {
            path.push_back(t);
            t=parent[t];
        }
        reverse(path.begin(),path.end());
        for (int x: path)
        cout << x<< " ";
    }

}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int x,y; cin >> x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cin >>s>>t; 
    Path(s,t);
    return 0;
}