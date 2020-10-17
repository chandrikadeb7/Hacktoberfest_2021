#include <bits/stdc++.h>
using namespace std;

class Graph{

    int V;
    list<pair<int,int>> edgeList;
public:
    explicit Graph(int V){
        this->V = V;
    }

    void addEdge(int x,int y){
        edgeList.push_back(make_pair(x,y));
    }

    //DISJOINT SET

    int findSet(int x,vector<int> &parent){                 // PATH COMPRESSION
        if(parent[x]==x)
            return x;
        else
            return parent[x] = findSet(parent[x],parent);       // approximate O(logn)
    }

    bool unionSet(int x,int y,vector<int> &parent,vector<int> & rank){              // UNION BY RANK

        int s1 = findSet(x,parent);
        int s2 = findSet(y,parent);

        if(s1!=s2) {
            if (rank[s1] > rank[s2]) {
                parent[s2] = s1;
                rank[s1] += rank[s2];
            } else {
                parent[s1] = s2;
                rank[s2] += rank[s1];
            }
            return false;
        }                                       // Complexity O(n)
        return true;
    }

    bool detectCycle(){

        vector<int> parent(V);
        vector<int> rank(V);
        for(int i=0;i<V;i++) {
            parent[i] = i;
            rank[i]=1;
        }

        for(auto edge: edgeList){
            bool status = unionSet(edge.first,edge.second,parent, rank);
            if(status)
                return true;
            }
        return false;
    }

};

int main() {
    int vertex,edges;
    cin>>vertex>>edges;

    Graph g(vertex);
    for(int i=0;i<edges;i++){
        int x,y;
        cin>>x>>y;
        g.addEdge(x,y);
    }

    bool status = g.detectCycle();

    if(status)
        cout<<"Cycle is Present in Graph.";
    else
        cout<<"No Cycle exist.";
}





// input 1
//5 4
//0 1
//1 2
//2 3
//3 4

// output 1
// No Cycle exist.

//input 2;
//6 6
//0 1
//0 2
//2 3
//1 3
//3 4
//4 5

// output 2
// Cycle is Present in Graph.
