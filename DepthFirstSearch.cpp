#include<bits/stdc++.h>
using namespace std;
void dfs(int s,vector<int> g[],bool *vis){
    vis[s]=true;
    cout<< s<< " ";
    for(int i=0;i<g[s].size();++i){
        if(vis[g[s][i]]==false)
            dfs(g[s][i],g,vis);
    }
}
int main(){
    int N,E;
    cout << " Enter vertices : ";
    cin >> N ;
    cout << " Enter Edges : ";
    cin >> E;
    vector<int> g[N];
    bool vis[N];
    memset(vis,false,sizeof(vis));
    for(int i=0;i<E;i++){
        int u,v;
        cout <<" Enter u : ";
        cin >> u;
        cout << " Enter v : ";
        cin >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(0,g,vis);
    cout<< endl;
}
