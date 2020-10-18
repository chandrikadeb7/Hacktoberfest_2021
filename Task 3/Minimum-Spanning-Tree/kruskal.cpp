#include <bits/stdc++.h>
using namespace std;

class DisjointSet{
    int *parent;
    int *rank;
public:

    explicit DisjointSet(int n){
        parent = new int[n];
        rank = new int[n];

        for(int i=0;i<n;i++){
            parent[i]=i;
            rank[i]=1;
        }
    }

    // PATH COMPRESSION
    int findSet(int x){
        if(parent[x]==x)
            return x;
        return parent[x] = findSet(parent[x]);
    }

    // UNION RANK
    void unionSet(int x,int y){
        int s1 = findSet(x);
        int s2 = findSet(y);

        if(s1!=s2){
            if(rank[s1]>rank[s2]){
                parent[s2]=s1;
                rank[s1] += rank[s2];
            }
            else{
                parent[s1]=s2;
                rank[s2] +=rank[s1];
            }
        }
    }
};


class Graph{
    int V;
    vector<vector<int>> edgeList;
public:
    explicit Graph(int V){
        this->V = V;
    }

    void addEdge(int x,int y,int wt){
        edgeList.push_back({wt,x,y});
    }

    int kruskalMst(){
        DisjointSet d1(V);
        int minCost=0;
        vector<pair<int,int>> v[V+5];

        sort(edgeList.begin(),edgeList.end());
        for(auto edge:edgeList){
            int wt = edge[0];
            int x = edge[1];
            int y = edge[2];

            int s1 = d1.findSet(x);
            int s2 = d1.findSet(y);

            if(s1!=s2){
                d1.unionSet(s1,s2);
                v[x].push_back(make_pair(y,wt));
                minCost += wt;
            }
        }
        for(int i=0;i<V;i++) {
            cout<<i<<" -> ";
            for (auto edge:v[i]) {
                cout <<"( "<< edge.first <<","<<edge.second<<" ) " << ",";
            }
            cout<<endl;
        }
        return minCost;
    }
};

int main() {
    int vertex,edges;
    cin>>vertex>>edges;

    Graph g(vertex);
    for(int i=0;i<edges;i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        g.addEdge(x,y,wt);
    }
    int minCost = g.kruskalMst();
    cout<<"Minimum cost to cover the Network :"<<minCost<<endl;
    return 0;
}

//input

//8 13
//0 1 1
//1 2 8
//0 3 4
//1 3 3
//1 4 7
//2 4 6
//3 4 5
//3 5 9
//3 6 10
//6 5 11
//6 7 13
//4 6 12
//4 7 2
