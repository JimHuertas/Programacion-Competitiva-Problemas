#include <iostream>
#include <vector>
#include <queue>
#define mx 20010
using namespace std;

class Data{
public:
    int node, weight;
    bool operator < ( const Data& p ) const{
        return weight > p.weight;
    }
};

int dijkstra(int source, int destination, vector<int> adj[], vector<int> cost[], int infinity){
    int d[mx];
    for(int i=0; i<mx; i++)
        d[i] = infinity;

    priority_queue<Data> pq;
    Data u, v;
    u.node = source, u.weight = 0;
    pq.push(u);
    d[source] = 0;

    while(!pq.empty()){
        u = pq.top();
        pq.pop();
        int ucost = d[u.node];

        for(int i=0; i<adj[u.node].size(); i++){
            v.node = adj[u.node][i], v.weight = cost[u.node][i] + ucost;
            if(d[v.node] > v.weight){
                d[v.node] = v.weight;
                pq.push(v);
            }
        }
    }
    return d[destination];
}

int main(){
    vector<int> adj[mx];
    vector<int> cost[mx];
    const int infinity = 1000000000;
    int N,n, m, S, T;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d %d %d %d",&n,&m,&S,&T);

        for(int j=1;j<=m;j++){
            int u, v, w;
            scanf("%d %d %d",&u,&v,&w);
            adj[u].push_back(v);
            adj[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }

        int ans = dijkstra(S,T,adj,cost,infinity);
        if(ans==infinity){
            printf("Case #%d: unreachable\n",i);
            for(int j=0;j<mx;j++){
                adj[j].clear();
                cost[j].clear();
            }
            continue;
        }
        printf("Case #%d: %d\n",i,ans);
        for(int j=0;j<mx;j++){
            adj[j].clear();
            cost[j].clear();
        }
    }
    return 0;
}