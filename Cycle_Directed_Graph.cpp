#include<bits/stdc++.h>
using namespace std;
Class Graph{
    int V;
    list<int> *adj;
    bool isCyclicUtil(int V,bool visited[],bool *rs)
    public:
    Graph(int V);
    void addEdge(int v,int w);
    bool isCyclic();
}
Graph::Graph(int V){
    this->V=V;
    adj=new list<int> V;
}
void Graph::addedge(int v,int w){
    adj[v].push_back(w);
}
