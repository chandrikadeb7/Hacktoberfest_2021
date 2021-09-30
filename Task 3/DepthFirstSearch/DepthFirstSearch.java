//Depth First Search (DFS) Java Program
/* To traverse in trees we have traversal algorithms like inorder, preorder, postorder. Same way to traverse in graphs we have mainly two types of algorithms called DFS (Depth First Search) and BFS (Breadth First Search).
In Depth First Search traversal we try to go away from starting vertex into the graph as deep as possible. We may face the case that our search never ends because, unlike tree graph may contains loops. Since this reason we maintain a Boolean array which stores whether the node is visited or not.
Output:

1 2 5 6 4 7 8 3 9
*/
//Below program shows implementation of dfs in Java.

import java.util.*;

public class DFS
{
	//no of vertices.
    int V;    
    
    //we are building graph using adjacency list.
	//so we should have linked list for every node and store adjacent nodes of that node in that list
    LinkedList<Integer> adjList[]; 

    // constructor
    DFS(int v)
    {
        V = v;
        adjList = new LinkedList[v];
        for (int i=0; i<v; ++i)
		{
            adjList[i] = new LinkedList();  //it will create empty list for every node
		}
    }
    
    //adding edges to graph 
    void addEdgesToGraph(int v, int u)
    {
        adjList[v].add(u);     //here it will add vertex to adjacency list of another vertex so that edge can be added to graph.
    }
	
    // depth first traversal is used by depth first search. it will traverse one strong component completely
    void DFTraversal(int v,int visited[])
    {
        visited[v] = 1;
		System.out.print(v + " ");
        Iterator<Integer> i = adjList[v].listIterator();
        while (i.hasNext())
        {
            int n = i.next();
            if (visited[n]==0)
                DFTraversal(n, visited);
        }
    }
	
    //depth first search will call depth fist traversal on disconnected components. it will keep track of visited[] array.
    void DFSearch(int v)
    {
        
        int visited[] = new int[V];
		
        DFTraversal(v, visited);
		for (int i=1;i<V;i++)
		{
			if(visited[i]==0)
			{
		     DFTraversal(i, visited);
			}
		}
    }
 
    public static void main(String args[])
    {
        DFS obj = new DFS(10);
        
        obj.addEdgesToGraph(1,2);
        obj.addEdgesToGraph(1,4);
        obj.addEdgesToGraph(2,5);
        obj.addEdgesToGraph(2,6);
        obj.addEdgesToGraph(4,7);
        obj.addEdgesToGraph(4,8);
        obj.addEdgesToGraph(3,9);
        obj.addEdgesToGraph(3,4);
        obj.addEdgesToGraph(4,3);
        
        obj.DFSearch(1);
    }
}

